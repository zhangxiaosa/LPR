const a = [];
const b = new Proxy(a, Proxy);

b.valueOf = function() {
  // function body of c
};

const d = isFinite(b);
return d;