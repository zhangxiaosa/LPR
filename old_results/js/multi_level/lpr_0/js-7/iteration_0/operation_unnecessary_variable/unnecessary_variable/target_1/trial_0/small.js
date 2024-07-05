function opt() {
    [].valueOf = function() {};
    return isFinite([]);
}