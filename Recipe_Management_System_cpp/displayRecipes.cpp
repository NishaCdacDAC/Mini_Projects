#include <iostream>
#include "recipe.h"

void displayRecipes(Recipe **recipes, int num_recipes) {
    std::cout << "---- All Recipes ----\n";
    for (int i = 0; i < num_recipes; i++) {
        std::cout << "Recipe #" << i+1 << ": " << recipes[i]->name << std::endl;
    }
    std::cout << "---------------------\n";
}