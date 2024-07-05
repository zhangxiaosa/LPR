function opt() {
    try {
        const protoOfA = Object.getPrototypeOf([]);
        const protoString = protoOfA.toLocaleString();
        [].unshift.apply(protoOfA, [protoString]);
    } catch {
        function eContent() {}
    }
    return eContent;
}