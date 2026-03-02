let str1 = prompt("Enter first string:");
let str2 = prompt("Enter second string:");

// ------------------------
// Method 1: Compare using loop
// ------------------------
let areSameUsingLoop = true;

if (str1.length !== str2.length) {
    areSameUsingLoop = false;
} else {
    for (let i = 0; i < str1.length; i++) {
        if (str1[i] !== str2[i]) {
            areSameUsingLoop = false;
            break;
        }
    }
}

// ------------------------
// Method 2: Using built-in function
// ------------------------
let areSameUsingBuiltIn = (str1 === str2);

// ------------------------
// Print results
// ------------------------
document.write("Comparison using loop: " + (areSameUsingLoop ? "Strings are same" : "Strings are different") + "<br>");
document.write("Comparison using built-in operator: " + (areSameUsingBuiltIn ? "Strings are same" : "Strings are different"));
