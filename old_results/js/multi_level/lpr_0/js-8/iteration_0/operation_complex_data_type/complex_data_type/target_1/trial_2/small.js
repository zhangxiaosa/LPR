function opt() {
    try {
        const a = [];
        const b = a;
        const c = b.toLocaleString();
        const d = b.unshift(c);
    } catch {
        function e() {}
    }
    return e;
}