function opt() {
    const arrayPrototype = Array.prototype;
    arrayPrototype.unshift(9007199254740991);
    const element127 = arrayPrototype[127];
    return element127;
}