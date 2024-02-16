#ifndef RECIPE_H
#define RECIPE_H

#include <string>

// Struct definition for ingredients
struct Ingredient {
    std::string name;
    double quantity;
    std::string unit;
};

// Struct definition for recipe
struct Recipe {
    std::string name;
    Ingredient ingredients[10]; // Assuming maximum of 10 ingredients per recipe
    int num_ingredients;
    std::string instructions;
};

// Functions
void createRecipe(Recipe **recipes, int *num_recipes);
void updateRecipe(Recipe **recipes, int num_recipes);
void deleteRecipe(Recipe **recipes, int *num_recipes);
void displayRecipes(Recipe **recipes, int num_recipes);

#endif