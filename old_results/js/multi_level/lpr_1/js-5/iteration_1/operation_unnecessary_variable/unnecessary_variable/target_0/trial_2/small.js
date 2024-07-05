function opt() {
    function a() {}
    {
        "prototype": a
    } = a;
    const g = a;
    return g;
}