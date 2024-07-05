function opt() {
   const a = [];
   const bValue = a.__proto__;
   const cValue = bValue.unshift(bValue);
   const dValue = cValue.toLocaleString();
   const eValue = dValue.replace(cValue);
   return eValue;
}