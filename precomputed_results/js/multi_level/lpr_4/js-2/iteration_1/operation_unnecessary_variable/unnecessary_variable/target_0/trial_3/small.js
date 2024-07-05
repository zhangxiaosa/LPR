function opt() {
    let a = [];
    let protoLength = a.__proto__.length;
    let optimizedString = (protoLength + 1).toLocaleString();
    return optimizedString;
}