function opt() {
    let arr = [];
    let proto = Object.getPrototypeOf(arr);

    proto.unshift(4294967297);
    proto.length = 256;

    let d = [];
    let e = Object.getPrototypeOf(d);

    let f = e.pop();
    let g = f;

    return g;
}