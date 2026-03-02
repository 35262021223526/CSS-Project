// ----------------------------------------------------------
// Recipe Finder (JavaScript Only)
// Search recipes by ingredient using MealDB API
// ----------------------------------------------------------

async function findRecipes(ingredient) {
    try {
        console.log("Searching recipes...");

        const url = `https://www.themealdb.com/api/json/v1/1/filter.php?i=${ingredient}`;
        const response = await fetch(url);

        if (!response.ok) {
            throw new Error("Network error occurred");
        }

        const data = await response.json();

        if (!data.meals) {
            throw new Error("No recipes found for this ingredient!");
        }

        // Show basic list of meals
        console.log(`Found ${data.meals.length} recipes for "${ingredient}":`);
        data.meals.forEach((meal, index) => {
            console.log(`${index + 1}. ${meal.strMeal} (Meal ID: ${meal.idMeal})`);
        });

    } catch (error) {
        console.log("Error:", error.message);
    }
}


// Fetch full details of a specific recipe by ID
async function getRecipeDetails(mealID) {
    try {
        console.log("Fetching recipe details...");

        const url = `https://www.themealdb.com/api/json/v1/1/lookup.php?i=${mealID}`;
        const response = await fetch(url);

        if (!response.ok) {
            throw new Error("Network error occurred");
        }

        const data = await response.json();

        if (!data.meals) {
            throw new Error("Recipe not found!");
        }

        const meal = data.meals[0];

        console.log("------ Recipe Details ------");
        console.log("Name:", meal.strMeal);
        console.log("Category:", meal.strCategory);
        console.log("Area:", meal.strArea);
        console.log("Instructions:", meal.strInstructions);
        console.log("Image URL:", meal.strMealThumb);
        console.log("YouTube Tutorial:", meal.strYoutube);

    } catch (error) {
        console.log("Error:", error.message);
    }
}


// ----------------------------------------------------------
// Example Usage
// ----------------------------------------------------------

// Step 1: Search by ingredient
findRecipes("chicken");

// Step 2: After list appears, choose a Meal ID
// getRecipeDetails(52772);   // Replace with an ID from the list
