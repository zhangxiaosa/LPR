function opt() {
    function a() {}
    const b = a;
    let d_CtorName = Proxy;
    let d_Args = [b, {}];
    let e = new d_CtorName(...d_Args);
    e.prototype = undefined;
    ({ "prototype": a } = b);
    return a;
}