function opt() {
    function a() {}
    let b = a;
    let e = b;
    let ePrototype = undefined;
    let aPrototype = b.prototype;
    b.prototype = aPrototype;
    return a;
}