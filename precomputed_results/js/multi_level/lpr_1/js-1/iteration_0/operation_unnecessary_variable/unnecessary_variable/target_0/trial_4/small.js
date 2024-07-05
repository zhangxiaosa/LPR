function opt() {
    const a = [Uint8Array];
    const b = [Uint8Array].__proto__;
    const c = b.unshift([Uint8Array]);
    const d = [Uint8Array].toLocaleString();
    const e = d.padStart(c);
    return e;
}