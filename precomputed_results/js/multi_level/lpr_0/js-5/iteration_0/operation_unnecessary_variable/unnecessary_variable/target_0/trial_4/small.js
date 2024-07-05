function opt() {
    let e = new Proxy(function a() {}, {});
    let f;
    e.prototype = f;
    
    return;
}