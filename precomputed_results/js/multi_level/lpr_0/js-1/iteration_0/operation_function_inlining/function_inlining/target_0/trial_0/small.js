const a = [Uint8ClampedArray];
const b = a.__proto__;
const c = b.unshift(a);
a.toLocaleString().padStart(c);