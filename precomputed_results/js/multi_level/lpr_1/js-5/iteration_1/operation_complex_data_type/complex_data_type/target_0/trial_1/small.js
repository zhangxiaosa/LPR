function opt() {
    function a() {}
    let e = new Proxy(a, {});
    e.prototype = undefined;
    ({
        "prototype": a
    } = a);
    const g = a;
    return g;
}

const target = opt(); // The optimized target is assigned to the variable 'target'.