function opt() {
	try {
		const a = [];
		const b = Object.getPrototypeOf(a);
		const c = b.toLocaleString();
		const d = [].unshift.apply(b, [c]);
	} catch {
		function eContent() {}
	}
	return eContent;
}