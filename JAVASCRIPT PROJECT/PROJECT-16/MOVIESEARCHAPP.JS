// --------------------------------------------
// Movie Search App (JavaScript Only + OMDB API)
// --------------------------------------------

async function searchMovie(title) {
    const apiKey = "YOUR_OMDB_KEY";
    const url = `https://www.omdbapi.com/?t=${encodeURIComponent(title)}&apikey=${apiKey}`;

    console.log("Searching for movie...");

    try {
        const response = await fetch(url);

        if (!response.ok) {
            throw new Error("Network error occurred");
        }

        const data = await response.json();

        if (data.Response === "False") {
            throw new Error("Movie not found");
        }

        console.log("------ Movie Details ------");
        console.log("Title: ", data.Title);
        console.log("Year: ", data.Year);
        console.log("IMDB Rating: ", data.imdbRating);
        console.log("Genre: ", data.Genre);
        console.log("Plot: ", data.Plot);
        console.log("Poster URL:", data.Poster);

    } catch (error) {
        console.log("Error:", error.message);
    }
}

// --------------------------------------------
// Example Usage
// --------------------------------------------
searchMovie("Inception");  
// Try: searchMovie("Avatar"), searchMovie("Iron Man")
