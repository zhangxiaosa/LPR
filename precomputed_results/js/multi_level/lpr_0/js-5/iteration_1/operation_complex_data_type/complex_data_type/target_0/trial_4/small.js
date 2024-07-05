function opt() {
    let e = function a() {};
    e.prototype = undefined;
    let a = e;
    return a;
}