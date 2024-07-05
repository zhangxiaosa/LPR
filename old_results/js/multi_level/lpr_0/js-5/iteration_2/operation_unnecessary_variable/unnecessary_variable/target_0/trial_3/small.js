function opt() {
    ({
        "prototype": new Proxy(function() {}, {})
    } = new Proxy(function() {}, {}));
    return new Proxy(function() {}, {});
}