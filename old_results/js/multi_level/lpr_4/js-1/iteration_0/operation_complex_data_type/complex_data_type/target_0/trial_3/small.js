const a = []; // Array
const b = Object.getPrototypeOf(a); // Object
const c = b.unshift(a); // Number
const d = a.toLocaleString(); // String
const e = d.padStart(c); // String
return e;