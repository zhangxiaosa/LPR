function opt() {
    // Inlined function "a"
    // Actual code of function "a" goes here

    const e = new Proxy(function a() {}, {});
    e.prototype = undefined;
  
    ({
        "prototype": function a() {}
    } = function a() {});
  
    return function a() {};
}