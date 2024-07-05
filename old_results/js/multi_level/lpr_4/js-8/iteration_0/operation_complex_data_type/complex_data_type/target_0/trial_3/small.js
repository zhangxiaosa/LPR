function opt() {
    try {
        const a = [];
        let b = a.__proto__;
        const c = b.toLocaleString();
        const d = b.unshift(c);
    } catch {
        function e() {}
    }
    return e;
}