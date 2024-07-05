var arr = [];
arr.unshift(4294967297);
arr.length = 256;
var result = arr.pop();
console.log(result);