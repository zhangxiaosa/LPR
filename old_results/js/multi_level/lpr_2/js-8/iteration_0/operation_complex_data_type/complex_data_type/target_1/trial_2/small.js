function opt() {
    try {
        const a = [];
        const b = a.__proto__;
        const c = b.toLocaleString();
        const d = b.unshift(c);
    } catch {
        const e = undefined;
    }
    return undefined;
}