function opt() {
    const ArrayProto = Array.prototype;
    
    const b = ArrayProto;
    const c = b.unshift(4294967297);
    b.length = 256;
    
    const e = ArrayProto;
    const f = e.pop();
    const g = f;
    
    return g;
}