function opt() {
    const e = new Proxy({}, {});
    e.prototype = undefined;
    ({
        "prototype": {}
    } = {});
    return {};
}