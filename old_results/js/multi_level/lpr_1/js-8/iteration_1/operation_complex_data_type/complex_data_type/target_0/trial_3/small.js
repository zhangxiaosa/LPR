function opt() {
    try {
        const a = [];
        const b = Object.getPrototypeOf(a);
        const c = b.toLocaleString();
        const d = Array.prototype.unshift.call(b, c);
    } catch {
        function eContent() {}
    }
    return eContent;
}