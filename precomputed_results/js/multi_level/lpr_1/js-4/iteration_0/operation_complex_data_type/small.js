function opt() {
    const arr = [];
    let proto = arr.__proto__;
    proto.unshift(4294967297);
    proto.length = 256;
    const e = Array.prototype;
    let g = e.pop();
    return g;
}