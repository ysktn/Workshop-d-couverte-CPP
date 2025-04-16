#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string input;

    // Demander à l'utilisateur d'entrer une chaîne
    std::cout << "Entrez une chaîne de caractères : ";
    std::getline(std::cin, input);

    // Afficher la longueur de la chaîne
    std::cout << "Longueur de la chaîne : " << input.length() << std::endl;

    // Convertir la chaîne en majuscules
    std::string upperCase = input;
    std::transform(upperCase.begin(), upperCase.end(), upperCase.begin(), ::toupper);
    std::cout << "En majuscules : " << upperCase << std::endl;

    // Convertir la chaîne en minuscules
    std::string lowerCase = input;
    std::transform(lowerCase.begin(), lowerCase.end(), lowerCase.begin(), ::tolower);
    std::cout << "En minuscules : " << lowerCase << std::endl;

    // Inverser la chaîne
    std::string reversed = input;
    std::reverse(reversed.begin(), reversed.end());
    std::cout << "Chaîne inversée : " << reversed << std::endl;

    // Remplacer les espaces par des underscores
    std::string replaced = input;
    std::replace(replaced.begin(), replaced.end(), ' ', '_');
    std::cout << "Avec espaces remplacés par des underscores : " << replaced << std::endl;
    // Trouver la première occurrence d'un caractère spécifique
    char charToFind = 'a';
    size_t found = input.find(charToFind);
    if (found != std::string::npos) {
        std::cout << "Première occurrence de '" << charToFind << "' trouvée à la position : " << found << std::endl;
    } else {
        std::cout << "Le caractère '" << charToFind << "' n'a pas été trouvé dans la chaîne." << std::endl;
    }

    // Trouver la première occurrence d'une sous-chaîne
    std::string substringToFind = "test";
    found = input.find(substringToFind);
    if (found != std::string::npos) {
        std::cout << "Première occurrence de \"" << substringToFind << "\" trouvée à la position : " << found << std::endl;
    } else {
        std::cout << "La sous-chaîne \"" << substringToFind << "\" n'a pas été trouvée dans la chaîne." << std::endl;
    }


    
    return 0;
}