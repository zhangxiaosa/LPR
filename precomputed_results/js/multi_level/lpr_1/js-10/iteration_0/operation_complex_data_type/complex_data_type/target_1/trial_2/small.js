function opt() {
  const v1 = [];
  const v2Prototype = Array.prototype; // Extracted prototype object
  const v3 = v2Prototype.unshift(3848398693); // Extracted result (array length after unshift)
  const v5 = v3;
  const v6 = v5.toLocaleString();
  const v7 = v6.localeCompare(v3);
  return v7;
}