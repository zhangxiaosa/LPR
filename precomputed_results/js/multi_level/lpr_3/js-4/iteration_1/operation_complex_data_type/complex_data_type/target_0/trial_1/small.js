const unshiftedValue = 4294967297;
Array.prototype.unshift(unshiftedValue);

const originalLength = Array.prototype.length;
Array.prototype.length = 256;

const poppedValue = Array.prototype.pop();

Array.prototype.length = originalLength;

return poppedValue;