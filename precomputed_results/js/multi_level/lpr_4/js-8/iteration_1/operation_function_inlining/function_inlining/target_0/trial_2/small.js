function opt() {
	try {
		const array = [];
		array.__proto__.unshift(array.__proto__.toLocaleString());
	} catch {
		// Empty catch block
	}
	return function _opt_e() {};
}