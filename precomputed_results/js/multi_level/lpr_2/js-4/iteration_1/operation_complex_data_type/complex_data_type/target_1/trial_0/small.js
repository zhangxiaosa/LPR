function opt() {
    let b = Object.create(Array.prototype);
    b = [4294967297, ...b.slice(0, 255)];
    const f = b[0];
    const g = f;
    return g;
}