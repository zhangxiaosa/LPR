function opt() {
    try {
        const protoString = Object.getPrototypeOf([]).toLocaleString();
        [].unshift.apply(Object.getPrototypeOf([]), [Object.getPrototypeOf([]).toLocaleString()]);
    } catch {
        function eContent() {}
    }
    return eContent;
}