function opt() {
    const a = [];
    const b = a.__proto__;
    const c = b.unshift(undefined);

    function d() {}
    const f = d.toString().padEnd(c);
    return f;
}