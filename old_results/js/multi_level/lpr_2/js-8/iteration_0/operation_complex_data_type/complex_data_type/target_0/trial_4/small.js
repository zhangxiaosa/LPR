function opt() {
    try {
        const a = [];
        const b = a.__proto__;
        const c = b.toLocaleString.call(a);
        const d = b.unshift.call(a, c);
    } catch {
        function e() {}
    }
    return e;
}