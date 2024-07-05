function opt() {
    const a = [];
    const b = Array.prototype;
    
    b.unshift.call(a, 4294967297);
    b.length = 256;
    
    const val = [];
    const e = Array.prototype;
    const f = e.pop.call(val);
    const g = f;
    
    return g;
}