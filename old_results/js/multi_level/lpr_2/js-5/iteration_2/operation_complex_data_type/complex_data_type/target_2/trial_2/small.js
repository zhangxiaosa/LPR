function opt() {
    function a() {}
    let f;
    const e_proxy_target = a;
    const e_proxy_handler = {};
    const e = new Proxy(e_proxy_target, e_proxy_handler);
    Object.defineProperty(e, "prototype", { value: f });
    const a_value = a;
    const g = a_value;
    return g;
}