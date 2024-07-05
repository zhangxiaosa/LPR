function opt() {
    try {
        const a = [];
        const b = Object.getPrototypeOf(a);
        const c = b.toLocaleString();
        const d = [].unshift.apply(b, [c]);
    } catch {
        // Handle error
    }
    function eContent() {
        return b.toLocaleString();
    }
    return eContent;
}