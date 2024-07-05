function opt() {
	const arr = [];
	const protoA = arr;
	const unshiftResult = protoA.unshift(4294967297);
	protoA.length = 256;
	const arr2 = [];
	const protoD = arr2;
	const popResult = protoD.pop();
	const result = popResult;
	return result;
}