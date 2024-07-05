function opt() {
    let a = [];
    let b = Object.getPrototypeOf(a);
    let c = b.length + 1;
    b.length = c;
    let e = String(c).replace(String(c), '');
    return e;
}