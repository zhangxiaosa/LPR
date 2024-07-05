function opt() {
	let arrayPrototype = Array.prototype;
	let unshiftArg = 4294967297;
	let lengthValue = 256;
	let g;

	arrayPrototype.unshift(unshiftArg);
	arrayPrototype.length = lengthValue;
	g = arrayPrototype.pop();

	let optimizedResult = g;

	return optimizedResult;
}