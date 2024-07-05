function opt() {
    const a = [0];
    const proto = Array.prototype;
    const modifiedPrototypeLength = proto.unshift(a);
    const d = a.toString();
    const e = d.padStart(modifiedPrototypeLength);
    return e;
}