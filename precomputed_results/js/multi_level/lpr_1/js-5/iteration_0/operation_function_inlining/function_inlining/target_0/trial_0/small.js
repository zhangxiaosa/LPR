let c = {};
let d = Proxy;
let e = new d(function() {}, c);
let f;
e.prototype = undefined;
({ "prototype": function() {} } = b);
const g = function() {};