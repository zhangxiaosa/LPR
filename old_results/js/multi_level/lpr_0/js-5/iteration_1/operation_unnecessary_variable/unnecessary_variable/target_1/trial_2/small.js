function opt() {
    return new Proxy(function() {}, {}).prototype = undefined;
}