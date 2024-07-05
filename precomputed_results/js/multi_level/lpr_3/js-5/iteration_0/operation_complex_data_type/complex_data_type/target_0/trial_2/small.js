function opt() {
    let a;
    let b = a;
    let c = {};
    let d = undefined;
    let e = new d(b, c);
    let f;
    e.prototype = f;
    ({ "prototype": a } = b);
    let g = a;
    return g;
}