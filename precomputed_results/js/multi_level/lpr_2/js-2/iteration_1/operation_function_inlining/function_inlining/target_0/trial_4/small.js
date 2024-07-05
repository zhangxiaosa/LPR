function opt() {
	const c = function() {
	  const length = this.length || 0;
	  for (let i = length; i > 0; i--) {
	    this[i] = this[i - 1];
	  }
	  this[0] = Array;
	  return length + 1;
	}.bind(Array)();

	return (function() {
	  const arr = [];
	  arr.unshift(Array);
	  const arrayString = arr.join();
	  return arrayString.split(c).join(Array);
	})();
}