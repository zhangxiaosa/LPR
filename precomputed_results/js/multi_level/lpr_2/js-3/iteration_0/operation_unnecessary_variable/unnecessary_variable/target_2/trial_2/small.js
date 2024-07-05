function opt() {
    const a = [];
    const b = a.__proto__;

    function d() {}
    const e = d.toString();
    const f = e.padEnd(b.length);
    return f;
}