function opt() {
   // Function a body
}

const b = opt;
let c = {};
let d = Proxy;
let e = new d(b, c);
let f;
e.prototype = f;
({"prototype": opt} = b);
return opt;
}