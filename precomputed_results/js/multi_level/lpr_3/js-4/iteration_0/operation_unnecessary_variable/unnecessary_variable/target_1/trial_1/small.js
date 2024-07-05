function opt() {
    Array.prototype.unshift(4294967297);
    Array.prototype.length = 256;
    Array.prototype.pop(); // Remove the assignment to the unused variable e
    const f = Array.prototype.pop(); // Assign the value directly to f
    return f;
}