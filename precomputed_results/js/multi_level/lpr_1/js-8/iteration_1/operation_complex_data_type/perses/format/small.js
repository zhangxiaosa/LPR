function opt() {
    try {
        const a = [];
        const protoOfA = Object.getPrototypeOf(a);
        const protoString = protoOfA.toLocaleString();
        const unshiftResult = [].unshift.apply(protoOfA, [protoString]);
    } catch {
        function eContent() {}
    }
    return eContent;
}
