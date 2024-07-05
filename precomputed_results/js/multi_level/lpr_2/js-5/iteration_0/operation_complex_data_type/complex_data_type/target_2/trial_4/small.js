const opt = function () {
    const a = function () {};
    const e = new Proxy(a, {});
    let f;
    e.prototype = f;
    ({ "prototype": a } = a);
    const g = a;
    return g;
};