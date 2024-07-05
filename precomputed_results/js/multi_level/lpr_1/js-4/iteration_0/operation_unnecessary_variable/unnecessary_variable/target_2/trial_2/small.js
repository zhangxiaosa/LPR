function opt() {
    let proto = [].__proto__;
    proto.unshift(4294967297);
    proto.length = 256;
    return Array.prototype.pop();
}