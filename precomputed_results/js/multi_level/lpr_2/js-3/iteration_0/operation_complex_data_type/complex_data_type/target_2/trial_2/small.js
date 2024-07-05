function opt() {
  const a = [];
  const protoA = a.__proto__;
  const protoAWithUndefined = [undefined].concat(protoA);

  function dOptimized() {}
  const dOptimizedString = dOptimized.toString();
  const paddedDOptimizedString = dOptimizedString.padEnd(protoAWithUndefined.length);

  return paddedDOptimizedString;
}

// The target to be optimized is dOptimized.