function opt() {
    function a() {
    }
    const b = a;
    let c = {};
    let d = Proxy;
    let e = new d(b, c);
    let f;
    e.prototype = f;
    ({ "prototype": a } = b);
    const g = a;

    // Unrolled loop
    // Iteration 1
    propertyName = <value1>;
    // loop body

    // Iteration 2
    propertyName = <value2>;
    // loop body

    // Iteration 3
    propertyName = <value3>;
    // loop body

    // Iteration 4
    propertyName = <value4>;
    // loop body

    return g;
}