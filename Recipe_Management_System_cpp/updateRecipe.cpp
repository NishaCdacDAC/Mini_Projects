#include <iostream>
#include "recipe.h"

void updateRecipe(Recipe **recipes, int num_recipes) {
    int recipe_index;
    std::cout << "Enter the index of the recipe to update: ";
    std::cin >> recipe_index;
    std::cin.ignore(); // Clear the input buffer

    if (recipe_index < 1 || recipe_index > num_recipes) {
        std::cout << "Invalid recipe index.\n";
        return;
    }

    Recipe *recipe = recipes[recipe_index - 1]; // Adjusting for 0-based indexing

    std::cout << "Enter new recipe name: ";
    std::getline(std::cin, recipe->name);

    std::cout << "Enter new number of ingredients: ";
    std::cin >> recipe->num_ingredients;
    std::cin.ignore(); // Clear the input buffer

    std::cout << "Enter new ingredients:\n";
    for (int i = 0; i < recipe->num_ingredients; i++) {
        std::cout << "Ingredient " << i+1 << " name: ";
        std::getline(std::cin, recipe->ingredients[i].name);

        std::cout << "Quantity: ";
        std::cin >> recipe->ingredients[i].quantity;
        std::cin.ignore();

        std::cout << "Unit: ";
        std::getline(std::cin, recipe->ingredients[i].unit);
    }

    std::cout << "Enter new cooking instructions:\n";
    std::getline(std::cin, recipe->instructions);

    std::cout << "Recipe updated successfully.\n";
}