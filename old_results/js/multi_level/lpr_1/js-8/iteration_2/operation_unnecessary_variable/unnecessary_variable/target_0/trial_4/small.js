function opt() {
    try {
        [].unshift.apply(Object.getPrototypeOf([]), [Object.getPrototypeOf([]).toLocaleString()]);
    } catch {
        // Empty catch block
    }
    return;
}