function opt() {
    function a() {}
    a.prototype = undefined;
    return a;
}