function opt() {
  const a = [];
  const b = a;
  const c = [b, ...b];
  const d = c.toLocaleString();
  const e = d.replace(',', '-');
  return e;
}

const optimizedResult = opt();