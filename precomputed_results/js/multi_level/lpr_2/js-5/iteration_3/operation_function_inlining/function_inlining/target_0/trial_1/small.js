function opt() {
    const a = function() {
        a.prototype = a;
        return a;
    };
    return a;
}