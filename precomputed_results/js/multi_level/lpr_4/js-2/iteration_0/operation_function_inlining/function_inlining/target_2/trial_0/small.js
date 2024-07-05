function opt() {
    const a = [];
    const b = a.__proto__;
    b.length = b.length + 1;
    for (let i = b.length - 1; i > 0; i--) {
      b[i] = b[i - 1];
    }
    b[0] = b;
    const e = c.toLocaleString().toString().replace(new RegExp(c, 'g'), '');
    return e;
}