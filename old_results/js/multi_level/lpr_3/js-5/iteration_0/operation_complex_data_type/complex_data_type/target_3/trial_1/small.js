const opt = function() {
    const a = function() {};
    let primitiveC = {};
    let dConstructor = Proxy;
    let e = new dConstructor(a, primitiveC);
    e.prototype = undefined;
    const g = a;
    const d = e;
    return g;
};