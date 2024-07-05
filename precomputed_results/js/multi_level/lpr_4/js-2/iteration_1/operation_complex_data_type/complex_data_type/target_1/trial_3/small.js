function opt() {
    let a = [];
    let lengthOfA = a.length + 1;
    Object.setPrototypeOf(a, Array.prototype);
    a.length = lengthOfA;
    
    let c = lengthOfA;
    return c.toLocaleString();
}