#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string input;

    std::cout << "Entrez une chaîne de caractères : ";
    std::getline(std::cin, input);

    //afficher la longueur de la chaîne

    std::string upperCase = input;
    //changer upperCase pour qu'il soit en majuscules
    std::cout << "En majuscules : " << upperCase << std::endl;

    std::string lowerCase = input;
    //changer lowerCase pour qu'il soit en minuscules
    std::cout << "En minuscules : " << lowerCase << std::endl;

    std::string reversed = input;
    //changer reversed pour qu'il soit inversé
    std::cout << "Chaîne inversée : " << reversed << std::endl;

    std::string replaced = input;
    //changer replaced pour qu'il remplace les espaces par des underscores
    std::cout << "Avec espaces remplacés par des underscores : " << replaced << std::endl;


    char charToFind = 'a';
    // Trouver la première occurrence d'un caractère spécifique
    size_t found = input.find(...);
    if (found != std::string::npos) {
        std::cout << "Première occurrence de '" << charToFind << "' trouvée à la position : " << found << std::endl;
    } else {
        std::cout << "Le caractère '" << charToFind << "' n'a pas été trouvé dans la chaîne." << std::endl;
    }

    // Trouver la première occurrence d'une sous-chaîne
    std::string substringToFind = "test";
    found = input.find(....);
    if (found != std::string::npos) {
        std::cout << "Première occurrence de \"" << substringToFind << "\" trouvée à la position : " << found << std::endl;
    } else {
        std::cout << "La sous-chaîne \"" << substringToFind << "\" n'a pas été trouvée dans la chaîne." << std::endl;
    }


    
    return 0;
}