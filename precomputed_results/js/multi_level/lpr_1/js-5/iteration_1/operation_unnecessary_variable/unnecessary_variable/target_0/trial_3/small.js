function opt() {
    function a() {}
    a.prototype = undefined;
    const g = a;
    return g;
}