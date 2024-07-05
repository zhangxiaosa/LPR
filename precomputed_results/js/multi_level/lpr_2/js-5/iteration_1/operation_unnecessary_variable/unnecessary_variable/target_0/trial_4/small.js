function opt() {
    function a() {}
    let f;
    const e = new Proxy(a, {});
    return a;
}