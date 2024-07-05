function opt() {
    const a = [];
    const b = a.__proto__;
    const c = b.unshift(undefined);

    function d() {}
    const e = d.toString();
  
    return e.padEnd(c);
}