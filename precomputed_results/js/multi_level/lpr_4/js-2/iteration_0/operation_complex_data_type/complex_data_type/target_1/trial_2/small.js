function opt() {
    const a = [];
    const bProto = Array.prototype;
    const bLength = bProto.length + 1;
    bProto.length = bLength;
    const c = bLength.toString();
    const e = c.replace(c, '');
    return e;
}