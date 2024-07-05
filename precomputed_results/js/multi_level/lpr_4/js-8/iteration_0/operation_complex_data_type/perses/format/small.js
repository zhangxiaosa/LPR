function opt() {
    try {
        const array = [];
        let object = array.__proto__;
        const string = object.toLocaleString();
        const number = object.unshift(string);
    } catch {
        function e() {}
    }
    return e;
}
