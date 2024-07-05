function opt() {
    let a = [];
    let c = 1;
    a.__proto__.length = c + 1;
    return c.toLocaleString();
}