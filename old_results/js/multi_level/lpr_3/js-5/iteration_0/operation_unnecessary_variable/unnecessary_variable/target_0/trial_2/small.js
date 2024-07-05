function opt() {
    function a() {}
    const b = a;
    let g = a;
    ({
        "prototype": a
    } = b);
    return g;
}