function opt() {
    let a = [];
    let b;
    let c;
    let d;
    let e;

    a = new Uint8Array();
    b = Object.getPrototypeOf(a);
    c = b.unshift(a);
    d = a.toLocaleString();
    e = d.padStart(Number(c));

    return e;
}