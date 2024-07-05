function opt() {
    try {
        const b = Array.prototype;
        b.toLocaleString();
        return b;
    } catch {
        function e() {}
    }
    return e;
}