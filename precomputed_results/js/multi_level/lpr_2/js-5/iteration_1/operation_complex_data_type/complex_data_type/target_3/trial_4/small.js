const a = function() {};
const d = Proxy;
let f = undefined;
const e = new d(a, {});
e.prototype = f;
const g = a;

function opt() {
  return g;
}