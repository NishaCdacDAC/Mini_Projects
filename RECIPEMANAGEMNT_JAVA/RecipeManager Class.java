import java.util.ArrayList;
import java.util.Scanner;

// RecipeManager class to manage recipes
public class RecipeManager {
    private ArrayList<Recipe> recipes; // List of recipes
    private Scanner scanner;           // Scanner object for user input

    // Constructor
    public RecipeManager() {
        this.recipes = new ArrayList<>();
        this.scanner = new Scanner(System.in);
    }

    // Method to add a new recipe
    public void addRecipe() {
        System.out.print("Enter recipe name: ");
        String name = scanner.nextLine();
        System.out.print("Enter cooking instructions: ");
        String instructions = scanner.nextLine();

        Recipe recipe = new Recipe(name, instructions);
        
        // Add ingredients to the recipe
        while (true) {
            System.out.print("Enter ingredient name (or 'done' to finish): ");
            String ingredientName = scanner.nextLine();
            if (ingredientName.equalsIgnoreCase("done")) {
                break;
            }
            System.out.print("Enter quantity: ");
            double quantity = Double.parseDouble(scanner.nextLine());
            System.out.print("Enter unit: ");
            String unit = scanner.nextLine();

            Ingredient ingredient = new Ingredient(ingredientName, quantity, unit);
            recipe.addIngredient(ingredient);
        }

        recipes.add(recipe);
        System.out.println("Recipe added successfully!");
    }

    // Method to view all recipes
    public void viewRecipes() {
        if (recipes.isEmpty()) {
            System.out.println("No recipes found.");
        } else {
            for (Recipe recipe : recipes) {
                recipe.display();
                System.out.println();
            }
        }
    }

    // Main method
    public static void main(String[] args) {
        RecipeManager recipeManager = new RecipeManager();
        Scanner scanner = new Scanner(System.in);
        
        while (true) {
            System.out.println("\nRecipe Book Menu");
            System.out.println("1. Add a new recipe");
            System.out.println("2. View all recipes");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");
            int choice = Integer.parseInt(scanner.nextLine());

            switch (choice) {
                case 1:
                    recipeManager.addRecipe();