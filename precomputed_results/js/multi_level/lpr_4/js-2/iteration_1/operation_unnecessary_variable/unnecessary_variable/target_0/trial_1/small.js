function opt() {
	let a = [];
	let protoLength = a.__proto__.length;
	a.__proto__.length = protoLength + 1;
	let cString = (protoLength + 1).toLocaleString();
	let optimizedString = (protoLength + 1).toLocaleString().replace(protoLength + 1);
	return optimizedString;
}