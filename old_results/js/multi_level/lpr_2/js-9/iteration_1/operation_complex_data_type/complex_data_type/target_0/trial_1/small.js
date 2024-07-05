function opt() {
    const a = [];
    const valueToAdd = 9007199254740991;
    a.unshift(valueToAdd);
    const optimizedValue = a[127];
    return optimizedValue;
}