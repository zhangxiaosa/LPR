function opt() {
    function a() {}
    let e = {};
    let ePrototype = undefined;
    ePrototype = undefined;
    let aPrototype = a;
    ({
        "prototype": aPrototype
    } = a);
    const g = a;
    return g;
}