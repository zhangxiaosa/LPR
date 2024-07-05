const a = [];
const b = a.__proto__;
b.unshift(undefined);
function d() {
}
const e = d.toLocaleString();
const f = e.padEnd(b.length);
return f;