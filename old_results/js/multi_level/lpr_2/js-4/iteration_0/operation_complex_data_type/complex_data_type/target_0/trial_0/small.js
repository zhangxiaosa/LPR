function opt() {
    const b_length = 256;

    function b_unshift(arg) {
        return Array.prototype.unshift(arg);
    }

    function b_pop() {
        return Array.prototype.pop();
    }

    const c = b_unshift(4294967297);
    const g = b_pop();

    return g;
}