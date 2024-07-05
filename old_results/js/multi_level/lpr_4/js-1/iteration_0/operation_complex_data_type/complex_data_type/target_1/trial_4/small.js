function opt() {
   const a = [new Uint8Array()];
   const b = Object.getPrototypeOf(a);
   const c = b.unshift(a);
   const d = a.toLocaleString();
   const e = d.padStart(c.toString());
   return e;
}