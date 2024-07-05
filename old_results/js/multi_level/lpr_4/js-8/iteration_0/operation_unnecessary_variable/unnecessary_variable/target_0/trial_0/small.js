function opt() {
    try {
        const array = [];
        let object = array.__proto__;
        const string = object.toLocaleString();
        object.unshift(string);
    } catch {
        // No changes
    }
    return e;
}