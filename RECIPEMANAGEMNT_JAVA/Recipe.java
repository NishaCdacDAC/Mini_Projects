import java.util.ArrayList;

// Recipe class to represent a recipe
public class Recipe {
    private String name;                     // Name of the recipe
    private ArrayList<Ingredient> ingredients; // List of ingredients
    private String instructions;             // Cooking instructions

    // Constructor
    public Recipe(String name, String instructions) {
        this.name = name;
        this.ingredients = new ArrayList<>();
        this.instructions = instructions;
    }

    // Getters and setters
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public ArrayList<Ingredient> getIngredients() {
        return ingredients;
    }

    public void setIngredients(ArrayList<Ingredient> ingredients) {
        this.ingredients = ingredients;
    }

    public String getInstructions() {
        return instructions;
    }

    public void setInstructions(String instructions) {
        this.instructions = instructions;
    }

    // Method to add an ingredient to the recipe
    public void addIngredient(Ingredient ingredient) {
        ingredients.add(ingredient);
    }

    // Method to display recipe details
    public void display() {
        System.out.println("Recipe: " + name);
        System.out.println("Ingredients:");
        for (Ingredient ingredient : ingredients) {
            ingredient.display();
        }
        System.out.println("Instructions: " + instructions);
    }
}