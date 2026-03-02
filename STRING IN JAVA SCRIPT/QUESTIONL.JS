let str = prompt("Enter a sentence:");
let word = prompt("Enter the word you want to remove:");

// Remove only the first occurrence
let result = str.replace(word, "");

document.write("Original string: " + str + "<br>");
document.write("After removing first occurrence: " + result);
