#include <iostream>
#include <unordered_map>
#include <string>

void exercise1() {
    // Exercice 1 : Insertion et accès de base
    std::unordered_map<std::string, int> map;
    //apple doit avoir la valeur 3
    //banana doit avoir la valeur 5
    //cherry doit avoir la valeur 7

    std::cout << "apple: " << map["apple"] << "\n";
    std::cout << "banana: " << map["banana"] << "\n";
    std::cout << "cherry: " << map["cherry"] << "\n";
}

void exercise2() {
    // Exercice 2 : Parcourir un unordered_map
    std::unordered_map<std::string, int> map = {{"dog", 1}, {"cat", 2}, {"bird", 3}};
    for ...// Parcourir la map et l'afficher
}

void exercise3() {
    // Exercice 3 : Vérifier l'existence d'une clé
    std::unordered_map<std::string, int> map = {{"red", 10}, {"blue", 20}, {"green", 30}};
    std::string key = "blue";

    if ...
}

void exercise4() {
    // Exercice 4 : Supprimer des éléments
    std::unordered_map<std::string, int> map = {{"one", 1}, {"two", 2}, {"three", 3}};
    //supprimer l'element "two"

    for (const auto& pair : map) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
}



int main() {
    std::cout << "Exercice 1:\n";
    exercise1();
    std::cout << "\nExercice 2:\n";
    exercise2();
    std::cout << "\nExercice 3:\n";
    exercise3();
    std::cout << "\nExercice 4:\n";
    exercise4();
    return 0;
}