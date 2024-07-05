function opt() {
    try {
        const a = [];
        a.__proto__.toLocaleString(); // Optimized code
    } catch {
        function e() {}
    }
    return e;
}