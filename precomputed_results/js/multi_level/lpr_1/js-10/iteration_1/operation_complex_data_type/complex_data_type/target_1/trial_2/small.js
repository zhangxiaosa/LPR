function opt() {
  const value = 3848398693;
  const array = Array.prototype;
  const length = array.unshift(value);
  const stringV3 = length.toLocaleString();
  const v7 = stringV3.localeCompare(length);
  return v7;
}