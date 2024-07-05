function opt() {
    let a = [];
    let c = a.__proto__.length + 1;
    a.__proto__.length = c;
    const e = (c.__proto__.length + 1).toLocaleString();
    return e;
}