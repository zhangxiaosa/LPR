const b = Array.prototype;
b.unshift(4294967297);
Array.prototype.length = 256;
b.pop();