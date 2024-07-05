function opt() {
    function a() {}
    let f;
    ({
        "prototype": a
    } = a);
    const g = a;
    return g;
}