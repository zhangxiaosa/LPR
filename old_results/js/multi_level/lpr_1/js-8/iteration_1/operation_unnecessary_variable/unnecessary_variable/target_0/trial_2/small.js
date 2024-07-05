function opt() {
    try {
        const protoOfA = Object.getPrototypeOf([]);
        const protoString = protoOfA.toLocaleString();
        const unshiftResult = [].unshift.apply(protoOfA, [protoString]);
    } catch {
        function eContent() {}
    }
    return eContent;
}