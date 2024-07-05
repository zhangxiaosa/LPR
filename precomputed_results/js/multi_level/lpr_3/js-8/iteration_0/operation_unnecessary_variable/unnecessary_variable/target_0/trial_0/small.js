function opt() {
    try {
        let b = {};
        const c = b.toLocaleString();
        const d = b.unshift(c);
    } catch {
        function e() {}
    }
    return e;
}