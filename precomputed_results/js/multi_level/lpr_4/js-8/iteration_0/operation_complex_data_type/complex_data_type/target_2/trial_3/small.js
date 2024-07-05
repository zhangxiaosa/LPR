function opt() {
    let c;

    try {
        const a = [];
        let b = a.__proto__;
        c = b.toLocaleString();
        const d = b.unshift(c);
    } catch {
        function e() {}
    }

    return e;
}