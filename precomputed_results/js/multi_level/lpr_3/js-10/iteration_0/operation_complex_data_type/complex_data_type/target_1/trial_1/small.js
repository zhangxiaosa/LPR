function opt() {
  const v3Length = 3848398693;
  const v6String = v3Length.toString();
  const v7Comparison = v6String.localeCompare(v3Length.toString());
  return v7Comparison;
}