let str = prompt("Enter a sentence:");
let word = "the";

// Convert to lowercase to count correctly
str = str.toLowerCase();

// Split sentence into words
let words = str.split(" ");

let count = 0;

for (let i = 0; i < words.length; i++) {
    if (words[i] === word) {
        count++;
    }
}

document.write("The word 'the' appears " + count + " times in the string.");
