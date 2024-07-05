function opt() {
    let f;
    let a = function() {};
    let e = new Proxy(a, {});
    
    let prototypeValue = a;
    a.prototype = f;
    
    let g = prototypeValue;
    return g;
}