#ifndef SNAKE_HPP_

#define SNAKE_HPP_

#include "Lib.hpp"
#define MAP_SIZE 20

class Snake : public IGame {
    public:
        Snake() = default;
        ~Snake() = default;
        const char *getName() override;
        void init(IGraphical &graphical) override;
        void update(IGraphical &graphical) override;
        void close() override;
        void handle_event() override;
        void check_end() override;
        IGraphical::Key direction = IGraphical::Key::RIGHT;
        int score = 0;
        bool is_over = false;
    private:
        enum MOVEMENT {
            LEFT,
            RIGHT,
            UP,
            DOWN
        };
        MOVEMENT movement;
        std::vector<std::pair<int, int>> snake;
        void generate_food();
        bool cyclical_map = false;
        std::pair<int, int> food_pos;
        bool is_food_eaten();
        void auto_move();
        void update_snake();
        void draw_snake(IGraphical &graphical);
        void draw_food(IGraphical &graphical);
        void draw_score(IGraphical &graphical);
        void draw_map(IGraphical &graphical);
};











#endif