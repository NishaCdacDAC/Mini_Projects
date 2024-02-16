#include <iostream>
#include "recipe.h"

void createRecipe(Recipe **recipes, int *num_recipes) {
    Recipe *new_recipe = new Recipe;
    
    std::cout << "Enter recipe name: ";
    std::getline(std::cin, new_recipe->name);

    std::cout << "Enter number of ingredients: ";
    std::cin >> new_recipe->num_ingredients;
    std::cin.ignore(); // Clear the newline character from the input buffer

    std::cout << "Enter ingredients:\n";
    for (int i = 0; i < new_recipe->num_ingredients; i++) {
        std::cout << "Ingredient " << i+1 << " name: ";
        std::getline(std::cin, new_recipe->ingredients[i].name);
         std::cin.ignore(); 
         while ((getchar()) != '\n');
        std::cout << "Quantity: ";
        std::cin >> new_recipe->ingredients[i].quantity;  
    }
std::cin.ignore(); 
         while ((getchar()) != '\n');
    std::cout << "Enter cooking instructions:\n";
    std::getline(std::cin, new_recipe->instructions);
    std::cin.ignore(); // Clear the newline character from the input buffer
    while ((getchar()) != '\n'); // Clear any remaining characters in the input buffer

    recipes[*num_recipes] = new_recipe;
    (*num_recipes)++;
}