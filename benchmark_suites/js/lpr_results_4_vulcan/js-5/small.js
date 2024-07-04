function opt() {
    function a() {}
    new Proxy(a, {}).prototype |= this;
    ({
        "prototype": a
    } = a)
    return a
}