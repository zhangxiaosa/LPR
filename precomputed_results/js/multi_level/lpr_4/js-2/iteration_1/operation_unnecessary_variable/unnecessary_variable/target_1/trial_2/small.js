function opt() {
    let a = [];
    a.__proto__.length = a.__proto__.length + 1;
    let optimizedString = a.__proto__.length.toLocaleString().replace(a.__proto__.length);
    return optimizedString;
}