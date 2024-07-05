function opt() {
    let proto = Array.prototype;
    proto.unshift(4294967297);
    proto.length = 256;
    return Array.prototype.pop();
}