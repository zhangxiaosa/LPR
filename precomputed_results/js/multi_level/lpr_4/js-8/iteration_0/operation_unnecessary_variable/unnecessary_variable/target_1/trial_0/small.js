function opt() {
    try {
        const array = [];
        const string = array.__proto__.toLocaleString();
        array.__proto__.unshift(string);
    } catch {
        function e() {}
    }
    return e;
}