// Word Analyzer Program

// Take input from the user
let sentence = prompt("Enter a sentence:");

// Count characters
let totalChars = sentence.length;

// Count words (split by spaces)
let words = sentence.trim().split(/\s+/);
let totalWords = words.length;

// Count vowels using loop
let vowels = "aeiouAEIOU";
let vowelCount = 0;

for (let i = 0; i < sentence.length; i++) {
    if (vowels.includes(sentence[i])) {
        vowelCount++;
    }
}

// Output results in console
console.log("----- Word Analyzer Result -----");
console.log("Sentence: " + sentence);
console.log("Total Characters: " + totalChars);
console.log("Total Words: " + totalWords);
console.log("Total Vowels: " + vowelCount);

// Show results in alert
alert(
    "Word Analyzer Result:\n" +
    "Characters: " + totalChars + "\n" +
    "Words: " + totalWords + "\n" +
    "Vowels: " + vowelCount
);
