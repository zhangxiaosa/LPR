function opt() {
    let a = [];
    a.__proto__.length = a.__proto__.length + 1;
    const cStr = (a.__proto__.length + 1).toLocaleString();
    const e = cStr.replace("");
    return e;
}