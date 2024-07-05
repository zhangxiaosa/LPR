function opt() {
    const a = [];
    const b = a.__proto__;
    const c = b.unshift(undefined);
    const e = "function d() {}".padEnd(c);
    return e;
}