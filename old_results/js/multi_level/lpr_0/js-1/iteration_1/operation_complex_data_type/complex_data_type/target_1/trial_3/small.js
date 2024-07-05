function opt() {
	let arrayPrototype = Array.prototype;
	let uint8Array = Uint8ClampedArray;
	let stringRepresentation = uint8Array.toLocaleString();
	let paddedString = stringRepresentation.padStart(arrayPrototype.unshift(uint8Array));
}