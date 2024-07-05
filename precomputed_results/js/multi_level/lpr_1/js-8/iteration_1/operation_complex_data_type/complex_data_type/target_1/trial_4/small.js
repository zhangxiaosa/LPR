function opt() {
    try {
        const a = [];
        const b = Object.getPrototypeOf(a);
        const c = b.toLocaleString();
        b.unshift(c);
    } catch {
        function eContent() {}
    }
    return eContent();
}