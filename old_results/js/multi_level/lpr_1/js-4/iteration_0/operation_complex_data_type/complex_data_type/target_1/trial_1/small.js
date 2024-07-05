function opt() {
    const arr = [];
    let proto = arr.__proto__;

    proto.unshift(4294967297);
    proto.length = 256;

    const d = [];
    let e = d.__proto__;

    const f = e.pop();
    let g = f;

    return g;
}