function opt() {
    const a = [];
    const b = a.__proto__;
    const arrToString = Array.prototype.toLocaleString.call(Uint8Array);
    const unshiftResult = Array.prototype.unshift.call(b, Uint8Array);
    return arrToString.padStart(unshiftResult);
}