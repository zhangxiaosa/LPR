function opt() {
  const { unshift, toLocaleString, localeCompare } = Array.prototype;
  const v2 = unshift.call(Array.prototype, 3848398693);
  const v3 = v2.toLocaleString();
  const v4 = v3.localeCompare(v2);
  return v4;
}