function opt() {
    try {
        const a = [];
        a.toLocaleString();
        a.unshift();
    } catch {
        function eContent() {}
    }
    return eContent;
}