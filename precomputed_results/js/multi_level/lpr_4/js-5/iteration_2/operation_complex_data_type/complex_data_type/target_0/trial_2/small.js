function opt() {
    function a() {}
    a.prototype = undefined;
    var aPrototype = a.prototype;
    a = a.prototype;
    return a;
}