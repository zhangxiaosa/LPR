function opt() {
  const b = function() {};
  let c = {};
  let d = Proxy;
  let e = new d(function() {}, c);
  let f;
  e.prototype = f;
  ({ "prototype": function() {} } = b);
  const g = function() {};
  return function() {};
}