function opt() {
  try {
    const protoString = Object.getPrototypeOf([]).toLocaleString();
    [].unshift.apply(Object.getPrototypeOf([]), [protoString]);
  } catch {
    function eContent() {}
  }
  return eContent;
}