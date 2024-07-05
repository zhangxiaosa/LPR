function opt() {
    try {
        Array.prototype.unshift(Array.prototype.toLocaleString());
    } catch {
        // The catch block is removed as `e` is not used.
    }
    return;
}