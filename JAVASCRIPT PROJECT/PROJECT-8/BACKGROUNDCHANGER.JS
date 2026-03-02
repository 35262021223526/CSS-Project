// Function to generate a random color
function getRandomColor() {
    const r = Math.floor(Math.random() * 256); 
    const g = Math.floor(Math.random() * 256);
    const b = Math.floor(Math.random() * 256);

    return `rgb(${r}, ${g}, ${b})`;
}

// Function to change background color on button click
function changeBackground() {
    let newColor = getRandomColor();
    document.body.style.backgroundColor = newColor;
    console.log("Background changed to:", newColor);
}
