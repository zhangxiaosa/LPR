let a = new Proxy(function a() {}, {});
a.prototype = undefined;
({ "prototype": a } = e);
return a;