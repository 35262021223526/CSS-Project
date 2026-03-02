// ------------------------------------------------------
// E-Commerce Cart System (JavaScript Only, Console App)
// ------------------------------------------------------

// Fake async product loader (simulates API call)
async function loadProducts() {
    return new Promise(resolve => {
        setTimeout(() => {
            resolve([
                { id: 1, name: "Laptop", price: 55000 },
                { id: 2, name: "Headphones", price: 2500 },
                { id: 3, name: "Keyboard", price: 1200 },
                { id: 4, name: "Mouse", price: 800 },
                { id: 5, name: "Smartphone", price: 18000 }
            ]);
        }, 800);
    });
}

// Cart Class (OOP)
class Cart {
    constructor() {
        this.items = JSON.parse(localStorage.getItem("cartItems")) || [];
    }

    saveCart() {
        localStorage.setItem("cartItems", JSON.stringify(this.items));
    }

    addProduct(product) {
        const existing = this.items.find(item => item.id === product.id);

        if (existing) {
            existing.qty++;
        } else {
            this.items.push({ ...product, qty: 1 });
        }

        this.saveCart();
        console.log(`Added to cart: ${product.name}`);
    }

    removeProduct(productId) {
        this.items = this.items.filter(item => item.id !== productId);
        this.saveCart();
        console.log(`Removed product ID: ${productId}`);
    }

    viewCart() {
        console.log("------------- CART -------------");

        if (this.items.length === 0) {
            console.log("Cart is empty.");
            return;
        }

        this.items.forEach(item => {
            console.log(`${item.name} | Qty: ${item.qty} | Price: ₹${item.price} | Total: ₹${item.qty * item.price}`);
        });

        console.log("Cart Total: ₹" + this.getTotal());
    }

    getTotal() {
        return this.items.reduce((sum, item) => sum + item.price * item.qty, 0);
    }
}

// ------------------------------------------------------
// Example Usage (Run in Console)
// ------------------------------------------------------

(async function () {
    console.log("Loading products...");
    const products = await loadProducts();

    console.log("Available Products:");
    products.forEach(p => console.log(`${p.id}. ${p.name} - ₹${p.price}`));

    const cart = new Cart();

    // Add items to cart
    cart.addProduct(products[0]); // Laptop
    cart.addProduct(products[1]); // Headphones
    cart.addProduct(products[1]); // Increase quantity
    cart.addProduct(products[3]); // Mouse

    // View cart
    cart.viewCart();

    // Remove a product
    cart.removeProduct(2); // Remove Headphones

    // View updated cart
    cart.viewCart();
})();
