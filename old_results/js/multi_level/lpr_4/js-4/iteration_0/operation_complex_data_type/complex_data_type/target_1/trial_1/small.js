function opt() {
    const arrayPrototype = Array.prototype;
    const arrayInstance = [];

    arrayPrototype.unshift.call(arrayInstance, 4294967297);
    arrayInstance.length = 256;

    const popMethod = arrayPrototype.pop;
    const poppedValue = popMethod.call(arrayInstance);

    return poppedValue;
}