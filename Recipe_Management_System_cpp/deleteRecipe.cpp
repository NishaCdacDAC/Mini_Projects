#include <iostream>
#include "recipe.h"

void deleteRecipe(Recipe **recipes, int *num_recipes) {
    int recipe_index;
    std::cout << "Enter the index of the recipe to delete: ";
    std::cin >> recipe_index;
    std::cin.ignore(); // Clear the input buffer

    if (recipe_index < 1 || recipe_index > *num_recipes) {
        std::cout << "Invalid recipe index.\n";
        return;
    }

    delete recipes[recipe_index - 1];

    // Shift remaining recipes to fill the gap
    for (int i = recipe_index - 1; i < *num_recipes - 1; i++) {
        recipes[i] = recipes[i + 1];
    }

    (*num_recipes)--;
    std::cout << "Recipe deleted successfully.\n";
}