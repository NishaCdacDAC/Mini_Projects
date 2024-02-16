#include <iostream>
#include "recipe.h"

int main() {
    Recipe **recipes = new Recipe*[100]; // maximum of 100 recipes
    int num_recipes = 0;
    int choice;

    while (true) {
        std::cout << "\nRecipe Book Menu\n";
        std::cout << "1. Add a new recipe\n";
        std::cout << "2. View all recipes\n";
        std::cout << "3. Update a recipe\n";
        std::cout << "4. Delete a recipe\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Clear the input buffer

        switch (choice) {
            case 1:
                createRecipe(recipes, &num_recipes);
                break;
            case 2:
                displayRecipes(recipes, num_recipes);
                break;
            case 3:
                displayRecipes(recipes, num_recipes);
                updateRecipe(recipes, num_recipes);
                break;
            case 4:
                displayRecipes(recipes, num_recipes);
                deleteRecipe(recipes, &num_recipes);
                break;
            case 5:
                // Free memory for dynamically allocated recipes
                for (int i = 0; i < num_recipes; i++) {
                    delete recipes[i];
                }
                delete[] recipes;
                std::cout << "Exiting...\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please enter again.\n";
        }
    }

    return 0;
}