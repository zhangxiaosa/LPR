const a = [];
const b = [];
const c = b.__proto__;
c.unshift(9007199254740991);
const d = c.length;
const e = Reflect.get(a, 127);
return e;