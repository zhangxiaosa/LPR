function opt() {
    try {
        const a = [];
        let b = a.__proto__;
        const c = b.toLocaleString();
        const d = b.unshift(c);

        // Decomposed variables
        const bString = b.toLocaleString();
        const unshiftResult = b.unshift(bString);
    } catch {
        function e() {}
    }

    return e;
}