function opt() {
    const arr = [];
    arr.unshift(4294967297);
    arr.length = 256;
    const f = arr.pop();
    return f;
}