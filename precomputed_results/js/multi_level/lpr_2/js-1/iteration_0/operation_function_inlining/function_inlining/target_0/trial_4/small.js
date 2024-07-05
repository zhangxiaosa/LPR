function opt() {
  const a = [Uint8ClampedArray];
  const b = a.__proto__;

  const c = (() => {
    const len = this.length;
    for (let i = len; i > 0; i--) {
      this[i] = this[i - 1];
    }
    this[0] = a;
  })();

  const d = (() => {
    let res = '';
    for (let i = 0; i < this.length; i++) {
      if (i > 0) {
        res += ',';
      }
      res += this[i];
    }
    return res;
  })();

  const e = d.padStart(c);
  return e;
}