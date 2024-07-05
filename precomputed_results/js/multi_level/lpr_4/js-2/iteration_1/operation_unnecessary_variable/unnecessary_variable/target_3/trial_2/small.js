function opt() {
    let a = [];
    a.__proto__.length = a.__proto__.length + 1 + 1;
    return (a.__proto__.length.toLocaleString().replace(a.__proto__.length));
}