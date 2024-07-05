function opt() {
  const a = [];
  const b = Array.prototype;
  const c = b.unshift(undefined);

  function d() {}
  const e = d.toString();
  const f = e.padEnd(c);
  
  const optimizedA = a;
  
  return { optimizedA };
}