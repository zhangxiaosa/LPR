const a = [];
const b = a.__proto__;
b.unshift(4294967297);
b.length = 256;
const d = [];
const e = d.__proto__;
const f = e.pop();
const g = f;
g;