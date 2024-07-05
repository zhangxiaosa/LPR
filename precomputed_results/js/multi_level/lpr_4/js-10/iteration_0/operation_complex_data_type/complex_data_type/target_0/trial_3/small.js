function opt() {
  const v1 = [];
  const v2 = v1.__proto__;
  const v3 = v2.unshift(3848398693);
  const v5 = v3;
  
  // Decomposed variables
  const v1String = v1.toString();
  const v3Number = Number(v3);
  const v6String = String(v3);
  const v7Number = Number(v5.toString().localeCompare(String(v3)));
  
  return v7Number;
}