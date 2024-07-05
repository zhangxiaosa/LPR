function opt() {
    function a() {}
    const target = a;
    const handler = {};
    Object.setPrototypeOf(target, undefined);
    const propertyAssignment = { "prototype": target };
    Object.assign(propertyAssignment, a);
    const g = target;
    return g;
}