function opt() {
    const a = [];
    const b = a.__proto__;
    const c = b.unshift(b);
    const e = c.toLocaleString().toString().replace(new RegExp(c, 'g'), '');
    return e;
}