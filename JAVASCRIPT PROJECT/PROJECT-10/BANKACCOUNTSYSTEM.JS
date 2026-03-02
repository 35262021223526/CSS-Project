// Parent Class: Bank Account
class Account {
    constructor(holderName, balance = 0) {
        this.holderName = holderName;
        this.balance = balance;
    }

    deposit(amount) {
        if (amount <= 0) {
            console.log("Invalid deposit amount!");
            return;
        }
        this.balance += amount;
        console.log(`${amount} deposited. New balance: ${this.balance}`);
    }

    withdraw(amount) {
        if (amount <= 0) {
            console.log("Invalid withdrawal amount!");
            return;
        }
        if (amount > this.balance) {
            console.log("Insufficient balance!");
            return;
        }
        this.balance -= amount;
        console.log(`${amount} withdrawn. New balance: ${this.balance}`);
    }

    getBalance() {
        console.log(`Current Balance: ${this.balance}`);
        return this.balance;
    }
}

// Subclass: Saving Account with interest
class SavingAccount extends Account {
    constructor(holderName, balance = 0, interestRate = 5) {
        super(holderName, balance);
        this.interestRate = interestRate; // percentage
    }

    addInterest() {
        let interest = (this.balance * this.interestRate) / 100;
        this.balance += interest;
        console.log(`Interest added: ${interest}. New balance: ${this.balance}`);
    }
}

// Testing the system
let acc1 = new Account("Vinayam", 1000);
acc1.deposit(500);
acc1.withdraw(300);
acc1.getBalance();

console.log("------ Saving Account ------");

let saveAcc = new SavingAccount("Shaurya", 2000, 7);
saveAcc.deposit(1000);
saveAcc.addInterest();
saveAcc.getBalance();
