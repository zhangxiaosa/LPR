function opt() {
    function a() {}
    const c = {};
    let eTarget = a;
    let eHandler = c;
    let e = new Proxy(eTarget, eHandler);
    let f;
    e.prototype = f;
    const g = a;
}