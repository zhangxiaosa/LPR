function opt() {
    try {
        const a = [];
        const proto = Object.getPrototypeOf(a);
        const c = proto.toLocaleString();
        const d = proto.unshift(c);
    } catch {
        function e() {}
    }
    return e;
}