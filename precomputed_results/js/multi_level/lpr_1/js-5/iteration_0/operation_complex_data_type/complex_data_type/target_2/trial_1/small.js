function opt() {
    function a() {}
    const b = a;
    const c = {};
    let d = Proxy;
    let e = [VALUE_OF_E];
    let f;
    e.prototype = f;
    ({ "prototype": a } = b);
    const g = a;
    return g;
}