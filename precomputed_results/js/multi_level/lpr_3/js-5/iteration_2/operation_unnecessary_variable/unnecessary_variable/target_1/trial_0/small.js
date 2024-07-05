function opt() {
    function a() {}
    const b = a;
    b.prototype = undefined;
    ({"prototype": a} = b);
    return a;
}