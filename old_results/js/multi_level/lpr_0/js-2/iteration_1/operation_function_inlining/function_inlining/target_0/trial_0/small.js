const bLength = Array.length + 1;
const bLengthString = bLength.toLocaleString();
const d = bLengthString.replace(new RegExp(bLength, 'g'), '');
return d;