#include "snake.hpp"
#include "sfml.hpp"
#include "Lib.hpp"
#include "IGraphical.hpp"

const char *Snake::getName()
{
    return "Snake";
}


void Snake::init(IGraphical &graphical)
{
    snake.push_back(std::make_pair(8, 7));
    snake.push_back(std::make_pair(9, 7));
    snake.push_back(std::make_pair(10, 7));
    snake.push_back(std::make_pair(11, 7));
    direction = IGraphical::Key::RIGHT;
    generate_food();
    score = 0;
    movement = RIGHT;
}


void Snake::update(IGraphical &graphical)
{
    draw_map(graphical);
    draw_snake(graphical);
    draw_food(graphical);
    draw_score(graphical);
}

void Snake::draw_map(IGraphical &graphical)
{
    graphical.drawText(0, 0, "Score: ");
    graphical.drawText(0,1, "#");
    for (int i = 1; i < MAP_SIZE; i++)
        graphical.drawText(i,1, "#");
    graphical.drawText(MAP_SIZE, 1, "#");
    for (int i = 1; i < MAP_SIZE; i++) {
        graphical.drawText(0, i, "#");
        graphical.drawText(MAP_SIZE, i, "#");
    }
    graphical.drawText(0, MAP_SIZE, "#");
    for (int i = 1; i < MAP_SIZE; i++)
        graphical.drawText(i,MAP_SIZE, "#");
    graphical.drawText(MAP_SIZE, MAP_SIZE, "#");
}


void Snake::close()
{
    is_over = true;
}


void Snake::generate_food()
{
    int x = rand() % MAP_SIZE;
    int y = rand() % MAP_SIZE;

    if (std::find(snake.begin(), snake.end(), std::make_pair(x, y)) != snake.end() || (x < 1 ||  x > MAP_SIZE || y < 2 || y > MAP_SIZE)) {
        generate_food();
    } else {
        food_pos = std::make_pair(x, y);
    }
}

void Snake::draw_food(IGraphical &graphical)
{
    graphical.drawText(Snake::food_pos.first,Snake::food_pos.second, "x");
}

void Snake::draw_score(IGraphical &graphical)
{
    graphical.drawText(7, 0, std::to_string(score));
    if (movement == RIGHT) {
        graphical.drawText(25, 0, "RIGHT");
    } else if (movement == LEFT) {
        graphical.drawText(25, 0, "LEFT");
    } else if (movement == UP) {
        graphical.drawText(25, 0, "UP");
    } else if (movement == DOWN) {
        graphical.drawText(25, 0, "DOWN");
    }
}

void Snake::draw_snake(IGraphical &graphical)
{
    for (size_t i = 0; i < snake.size(); ++i) {
        if (i == snake.size() - 1) {
            graphical.drawText(snake[i].first, snake[i].second, "X");
        } else {
            graphical.drawText(snake[i].first, snake[i].second, "o");
        }
    }
}


void Snake::update_snake()
{
    //detecter si une des fleches a ete presse
    //change la direction du snake
}


void Snake::auto_move()
{
    if (movement == RIGHT) {
        snake.push_back(std::make_pair(snake.back().first + 1, snake.back().second));
    } else if (movement == LEFT) {
        snake.push_back(std::make_pair(snake.back().first - 1, snake.back().second));
    } else if (movement == UP) {
        snake.push_back(std::make_pair(snake.back().first, snake.back().second - 1));
    } else if (movement == DOWN) {
        snake.push_back(std::make_pair(snake.back().first, snake.back().second + 1));
    }
}

void Snake::handle_event()
{
    update_snake();
    auto_move();
    if (!is_food_eaten()) {
        snake.erase(snake.begin());
    }
}

void Snake::check_end()
{
    if (snake.back().first < 1 || snake.back().first >= MAP_SIZE || snake.back().second < 2 || snake.back().second >= MAP_SIZE) {
        close();
    }

    if (std::find(snake.begin(), snake.end() - 1, snake.back()) != snake.end() - 1) {
        close();
    }
}

bool Snake::is_food_eaten()
{
    if (snake.back() == food_pos) {
        //agmenter le snake
        generate_food();
        return true;
    }
    return false;
}

int start_snake(IGraphical *graphical)
{
    Snake snake;
    snake.init(*graphical);
    while (snake.is_over == false) {
        snake.direction = graphical->getInput();
        snake.handle_event();
        snake.check_end();
        graphical->clearScreen();
        snake.update(*graphical);
        graphical->refreshScreen();
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
    return snake.score;
}

int main ()
{
    SFML sfml;
    //initialiser la sfml
    //lancer le jeu et recuperer le score
    //fermer la sfml
    return 0;


}






//g++ sfml.cpp snake.cpp -o my_snake -lsfml-graphics -lsfml-window -lsfml-system -I../../../includes