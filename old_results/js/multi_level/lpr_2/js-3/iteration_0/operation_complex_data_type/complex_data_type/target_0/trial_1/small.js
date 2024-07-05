function opt() {
  const a = [];
  const b = Array.prototype;
  const c = 1;

  function d() {}
  const e = d.toString();
  const f = e.padEnd(c, ' ');

  return f;
}

const optimizedResult = opt();
const optimizedVariable_a = optimizedResult.trim();