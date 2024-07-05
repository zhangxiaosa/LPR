const a = [];
const b = Object.getPrototypeOf(a);
b.unshift(b);
const d = c.toString();
const e = d.split(c).join('');
return e;