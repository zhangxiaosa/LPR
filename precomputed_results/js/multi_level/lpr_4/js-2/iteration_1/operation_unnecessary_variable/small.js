function opt() {
    let a = [];
    let protoLength = a.__proto__.length;
    a.__proto__.length = protoLength + 1;
    return (protoLength.toLocaleString().replace(protoLength));
}