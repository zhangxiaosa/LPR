function opt() {
    try {
        const array = [];
        const string = array.__proto__.toLocaleString();
        array.unshift(string);
    } catch {}
    return undefined;
}