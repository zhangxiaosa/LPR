function opt() {
    function a() {}
    const d = 'Proxy';
    const e = {};
    e.prototype = undefined;
    ({
        "prototype": a
    } = a);
    const g = 'a';
    return g;
}