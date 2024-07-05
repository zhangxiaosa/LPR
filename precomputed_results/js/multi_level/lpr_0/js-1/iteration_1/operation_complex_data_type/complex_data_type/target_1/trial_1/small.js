function opt() {
    let arrayPrototype = Array.prototype;
    let localeStringResult = Uint8ClampedArray.toLocaleString();
    let unshiftResult = arrayPrototype.unshift(Uint8ClampedArray);
    let padStartResult = unshiftResult.padStart(localeStringResult);

    return padStartResult;
}