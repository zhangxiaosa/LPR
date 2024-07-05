function opt() {
    new Proxy({}, {}).prototype = undefined;
    ({
        "prototype": {}
    } = {});
    return {};
}