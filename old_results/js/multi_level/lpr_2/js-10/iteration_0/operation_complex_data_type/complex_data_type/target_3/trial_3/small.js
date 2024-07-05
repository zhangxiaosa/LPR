function opt() {
	const array = [];
	array.unshift(3848398693);
	const numberFromArray = Number(array[0]);
	const stringFromNumber = numberFromArray.toLocaleString();
	const comparisonResult = stringFromNumber.localeCompare(numberFromArray.toString());
	const optimizedValue = Number(comparisonResult);

	return optimizedValue;
}

console.log(opt());