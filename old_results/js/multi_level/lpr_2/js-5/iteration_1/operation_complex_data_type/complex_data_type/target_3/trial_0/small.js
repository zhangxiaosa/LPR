function opt() {
  function a() {}
  const d = "Proxy"; // String
  let f = null; // null
  const e = {}; // Object
  e["prototype"] = f; // Assigning null to the "prototype" property of e
  const { prototype: _a } = a; // Assigning the value of a to _a
  const g = a; // Assigning the value of the a function to g
  return g; // Returning the value of g
}