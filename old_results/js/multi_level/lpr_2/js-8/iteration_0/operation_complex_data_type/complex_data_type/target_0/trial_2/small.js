function opt() {
    try {
        const a = [];
        let b = a.__proto__;
        const c = b.toLocaleString();
        const d = Array.prototype.unshift.call(b, c);
    } catch {
        function e() {}
    }
    return e;
}