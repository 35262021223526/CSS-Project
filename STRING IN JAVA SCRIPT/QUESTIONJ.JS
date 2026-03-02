let str1 = prompt("Enter first string:");
let str2 = prompt("Enter second string:");

// ------------------------
// Method 1: Using a loop
// ------------------------
let resultUsingLoop = str1;

for (let i = 0; i < str2.length; i++) {
    resultUsingLoop += str2[i];
}

// ------------------------
// Method 2: Using built-in function (+ operator or concat())
// ------------------------
let resultUsingBuiltIn = str1 + str2; 
// or: let resultUsingBuiltIn = str1.concat(str2);

document.write("Concatenation using loop: " + resultUsingLoop + "<br>");
document.write("Concatenation using built-in method: " + resultUsingBuiltIn);
