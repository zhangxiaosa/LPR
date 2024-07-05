function opt() {
    function a() {}
    const b = a;
    (
        "prototype": a
    ) = b;
    return b;
}