function opt() {
    try {
        let { "__proto__": b } = [];
        Array.prototype.unshift(Array.prototype.toLocaleString());
    } catch {
        // Empty catch block
    }
    // No return statement
}