function opt() {
  const v3Length = 3848398693;
  const v3LengthString = v3Length.toLocaleString();
  const v7Comparison = v3LengthString.localeCompare(v3Length);
  return v7Comparison;
}