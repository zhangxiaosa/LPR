function opt() {
    const arr = [];
    let proto = Object.getPrototypeOf(arr);

    proto.unshift(4294967297);
    proto.length = 256;

    const d = [];
    let e = Object.getPrototypeOf(d);

    const f = e.pop();
    let g = f;

    return g;
}