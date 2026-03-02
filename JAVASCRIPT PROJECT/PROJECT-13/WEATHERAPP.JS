// ------------------------------
// Weather App (JavaScript Only)
// ------------------------------

async function getWeather(city) {
    const apiKey = "YOUR_API_KEY"; 
    const url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apiKey}&units=metric`;

    console.log("Fetching weather...");

    try {
        const response = await fetch(url);

        if (!response.ok) {
            throw new Error("City not found!");
        }

        const data = await response.json();

        // Extract fields
        const temperature = data.main.temp;
        const condition = data.weather[0].description;
        const feelsLike = data.main.feels_like;
        const humidity = data.main.humidity;

        console.log("----- Weather Report -----");
        console.log("City:", city);
        console.log("Temperature:", temperature + " °C");
        console.log("Condition:", condition);
        console.log("Feels Like:", feelsLike + " °C");
        console.log("Humidity:", humidity + "%");
    } 
    catch (error) {
        console.log("Error:", error.message);
    }
}

// ------------------------------
// Example Usage (Run in Console)
// ------------------------------
getWeather("Delhi"); 
// You can replace "Delhi" with any city name
