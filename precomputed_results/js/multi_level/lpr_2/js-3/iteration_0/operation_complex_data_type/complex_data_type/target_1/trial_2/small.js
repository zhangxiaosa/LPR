function opt() {
    const a = [];
    const bPrototype = Object.getPrototypeOf(a);

    const b = bPrototype.constructor[Symbol.species](...bPrototype);

    const c = 1;

    function d() {}
    const e = d.toString();
    const f = e + ' '.repeat(c - e.length);
    return f;
}