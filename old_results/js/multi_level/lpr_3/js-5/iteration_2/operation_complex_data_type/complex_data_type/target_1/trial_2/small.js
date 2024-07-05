function opt() {
  function a() {}
  const b = function() {};
  let d = Proxy;
  let e = new Proxy(function() {}, {});
  e.prototype = undefined;
  let tempObject = {};
  tempObject.prototype = b;
  let prototype = tempObject.prototype;
  return a;
}