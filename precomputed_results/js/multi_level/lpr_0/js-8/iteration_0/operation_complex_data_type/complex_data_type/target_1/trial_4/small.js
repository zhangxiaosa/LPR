function opt() {
    try {
        const a = [];
        const b = Object.getPrototypeOf(a);
        const c = b.toLocaleString();
        const d = [c].concat(b);

        return d;
    } catch {
        const e = undefined;
        return e;
    }
}