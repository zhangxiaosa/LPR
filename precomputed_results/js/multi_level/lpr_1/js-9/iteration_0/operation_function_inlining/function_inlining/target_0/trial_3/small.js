const a = [];
const b = [];
const c = [].__proto__;
const d = [].__proto__.unshift(9007199254740991);
return Reflect.get([], 127);
