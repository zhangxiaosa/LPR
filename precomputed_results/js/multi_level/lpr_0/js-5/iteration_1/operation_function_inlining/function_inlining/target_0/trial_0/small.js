function opt() {
    let a = function a() {};
    ({
        "prototype": a
    } = a);
    return a;
}