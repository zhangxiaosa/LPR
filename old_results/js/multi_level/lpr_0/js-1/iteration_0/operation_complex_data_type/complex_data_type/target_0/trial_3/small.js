function opt() {
  const a = [Uint8ClampedArray];
  const b = a.__proto__;
  const c = b.unshift(a);
  const d = a.toLocaleString();
  const e = d.padStart(c);
  return e;
}

const a = [Uint8ClampedArray];
const b = a.__proto__;
const c = b.unshift(a);
const d = a.toLocaleString();
const e = d.padStart(c);

const optimizedA = a;
const optimizedB = b;
const optimizedC = c;
const optimizedD = d;
const optimizedE = e;