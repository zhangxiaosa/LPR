function opt() {
  let c = {};
  let d = Proxy;
  let e = new d(function() {
    // function a body
  }, c);
  e.prototype = undefined;
  ({ "prototype": function() {
    // function a body
  } } = function() {
    // function a body
  });
  return function() {
    // function a body
  };
}