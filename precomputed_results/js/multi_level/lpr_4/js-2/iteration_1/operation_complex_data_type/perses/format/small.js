function opt() {
    let a = [];
    let protoLength = a.__proto__.length;
    let c = protoLength + 1;
    a.__proto__.length = c;
    let cString = c.toLocaleString();
    let optimizedString = cString.replace(c               );
    return optimizedString;
}
