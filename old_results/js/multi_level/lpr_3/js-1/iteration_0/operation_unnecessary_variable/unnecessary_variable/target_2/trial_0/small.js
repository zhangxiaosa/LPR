function opt() {
    const a = [Uint8Array];
    const b = a.__proto__;
    const e = "[Uint8Array]".padStart(b.unshift(a));
    return e;
}