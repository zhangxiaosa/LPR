function opt() {
    const arr = [];
    let arrProto = Array.prototype;

    let protoValue = arrProto;
    protoValue.unshift(4294967297);
    protoValue.length = 256;

    const d = [];
    let dProto = Array.prototype;

    let eValue = dProto;

    let fValue = eValue.pop();
    let gValue = fValue;

    return gValue;
}