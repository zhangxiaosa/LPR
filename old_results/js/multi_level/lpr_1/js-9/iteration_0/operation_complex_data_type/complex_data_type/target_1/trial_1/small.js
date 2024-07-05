function opt() {
    const a = [];
    const b = [];
    const c = b.__proto__;
    const unshiftResult = c.unshift(9007199254740991);
    const getResult = Reflect.get(a, 127);
    const [element1] = b;
    return element1;
}