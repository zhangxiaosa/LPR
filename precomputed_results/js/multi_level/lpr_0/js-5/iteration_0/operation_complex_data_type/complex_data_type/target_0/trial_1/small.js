function opt() {
    let d = Object;
    let e = new Object();
    let a = function() {};
    let b = {};
    e.constructor = a;
    e.prototype = b;
    let f = e.prototype;
    let { prototype: a } = e;
    return a;
}