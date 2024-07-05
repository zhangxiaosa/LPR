let a = [];
let aProto = a.__proto__;
let aLength = aProto.length;
let c = aLength + 1;
aProto.length = c;
let cString = c.toLocaleString();
let result = cString.replace(c);