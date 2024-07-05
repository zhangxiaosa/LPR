function opt() {
    const arr = [];
    let proto = arr.__proto__;

    proto.unshift(4294967297);
    proto.length = 256;

    const d = [];
    let e = Array.prototype;

    const f = Array.prototype.pop.call(e);
    let g = f;

    return g;
}