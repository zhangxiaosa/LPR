function opt() {
    // Declare and initialize primary data type variables
    const a = new Uint8Array();
    let b;
    let c;
    let d;
    let e;
    
    // Perform operations
    b = Object.getPrototypeOf(a);
    c = b.unshift(a);
    d = a.toLocaleString();
    e = d.padStart(c);
    
    // Return the value
    return e;
}