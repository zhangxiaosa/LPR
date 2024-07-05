function opt() {
    try {
        const a = [];
        const c = a.__proto__.toLocaleString();
        const d = a.__proto__.unshift(c);
    } catch {
        function e() {}
    }
    return e;
}