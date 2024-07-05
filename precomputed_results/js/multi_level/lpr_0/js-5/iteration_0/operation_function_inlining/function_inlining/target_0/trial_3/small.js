function opt() {
  // Contents of function a
}
const b = opt; // Replace a with opt
let c = {};
let d = Proxy;
let e = new d(b, c);
let f;
e.prototype = f;
({ "prototype": opt } = b); // Replace a with opt
const g = opt; // Replace a with opt
return g;
}