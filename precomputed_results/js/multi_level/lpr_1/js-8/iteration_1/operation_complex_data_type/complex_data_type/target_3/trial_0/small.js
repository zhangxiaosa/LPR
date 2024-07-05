function opt() {
    try {
        const a = [];
        const b = Array.prototype;
        const c = Object.prototype.toLocaleString.call(b);
        const d = Array.prototype.unshift.apply(a, [c]);
    } catch {
        function eContent() {}
    }
    return eContent;
}