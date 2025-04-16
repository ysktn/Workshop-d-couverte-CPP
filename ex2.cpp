#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    // Exercice 1: Initialisation et affichage d'un std::vector
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::cout << "Exercice 1: ";
    for (int num : vec1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Exercice 2: Ajouter et supprimer des éléments
    std::vector<int> vec2;
    vec2.push_back(10);
    vec2.push_back(20);
    vec2.push_back(30);
    vec2.pop_back(); // Supprime le dernier élément
    std::cout << "Exercice 2: ";
    for (int num : vec2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Exercice 3: Trier un std::vector
    std::vector<int> vec3 = {5, 3, 8, 1, 2};
    std::sort(vec3.begin(), vec3.end());
    std::cout << "Exercice 3: ";
    for (int num : vec3) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Exercice 4: Trouver la somme des éléments
    std::vector<int> vec4 = {1, 2, 3, 4, 5};
    int sum = std::accumulate(vec4.begin(), vec4.end(), 0);
    std::cout << "Exercice 4: Somme = " << sum << std::endl;

    // Exercice 5: Rechercher un élément
    std::vector<int> vec5 = {10, 20, 30, 40, 50};
    int target = 30;
    auto it = std::find(vec5.begin(), vec5.end(), target);
    if (it != vec5.end()) {
        std::cout << "Exercice 5: Élément trouvé à l'index " << std::distance(vec5.begin(), it) << std::endl;
    } else {
        std::cout << "Exercice 5: Élément non trouvé" << std::endl;
    }

    return 0;
}