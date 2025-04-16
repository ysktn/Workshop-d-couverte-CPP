#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    // Exercice 1: Initialisation et affichage d'un std::vector
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::cout << "Exercice 1: ";
    //afficher les elements du vector
    for ...
    std::cout << std::endl;

    // Exercice 2: Ajouter et supprimer des éléments
    std::vector<int> vec2;
    //ajouter les element 10, 20 et 30
    ...
    std::cout << "Exercice 2: ";
    for ...
    std::cout << std::endl;

    // Exercice 3: Trier un std::vector
    std::vector<int> vec3 = {5, 3, 8, 1, 2};
    //trier la liste
    ...
    std::cout << "Exercice 3: ";
    for ...
    std::cout << std::endl;

    // Exercice 4: Trouver la somme des éléments
    std::vector<int> vec4 = {1, 2, 3, 4, 5};
    int sum = ...
    std::cout << "Exercice 4: Somme = " << sum << std::endl;

    // Exercice 5: Rechercher un élément
    std::vector<int> vec5 = {10, 20, 30, 40, 50};
    int target = 30;
    auto it = ...
    if (it != vec5.end()) {
        std::cout << "Exercice 5: Élément trouvé à l'index " << std::distance(vec5.begin(), it) << std::endl;
    } else {
        std::cout << "Exercice 5: Élément non trouvé" << std::endl;
    }

    return 0;
}