// ----------------------------------------
// Expense Tracker (JavaScript Only)
// ----------------------------------------

// Array to store all transactions
let transactions = [];

// Function to add a transaction
function addTransaction(type, amount, description = "") {
    try {
        if (type !== "income" && type !== "expense") {
            throw new Error("Type must be 'income' or 'expense'");
        }

        if (isNaN(amount) || amount <= 0) {
            throw new Error("Amount must be a positive number");
        }

        transactions.push({
            type,
            amount: Number(amount),
            description
        });

        console.log(`Added ${type}: ₹${amount} (${description})`);
    }
    catch (error) {
        console.log("Error:", error.message);
    }
}

// Function to calculate total income
function getTotalIncome() {
    return transactions
        .filter(t => t.type === "income")
        .reduce((sum, t) => sum + t.amount, 0);
}

// Function to calculate total expense
function getTotalExpense() {
    return transactions
        .filter(t => t.type === "expense")
        .reduce((sum, t) => sum + t.amount, 0);
}

// Function to show balance
function showBalance() {
    const income = getTotalIncome();
    const expense = getTotalExpense();
    const balance = income - expense;

    console.log("--------- Expense Report ----------");
    console.log("Total Income:  ₹" + income);
    console.log("Total Expense: ₹" + expense);
    console.log("Balance:       ₹" + balance);
}

// View all transactions
function viewTransactions() {
    console.log("-------- All Transactions --------");

    if (transactions.length === 0) {
        console.log("No transactions recorded.");
        return;
    }

    transactions.forEach((t, index) => {
        console.log(`${index + 1}. [${t.type}] ₹${t.amount} - ${t.description}`);
    });
}

// ----------------------------------------
// Example Usage (Run in Console)
// ----------------------------------------

// Valid inputs
addTransaction("income", 5000, "Salary");
addTransaction("expense", 1200, "Groceries");
addTransaction("expense", 600, "Transport");

// Invalid inputs to test error handling
addTransaction("bonus", 1000);      // invalid type
addTransaction("income", -300);     // invalid amount

viewTransactions();
showBalance();
