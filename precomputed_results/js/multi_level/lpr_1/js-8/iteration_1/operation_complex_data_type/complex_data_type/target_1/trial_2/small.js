function opt() {
    const a = [];
    const b = a.__proto__;
    const c = b.toLocaleString();
    b.unshift(c);
    return b;
}