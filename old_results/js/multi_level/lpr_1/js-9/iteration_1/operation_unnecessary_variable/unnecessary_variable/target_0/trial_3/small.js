function opt() {
    [9007199254740991].unshift(9007199254740991);
    return Reflect.get([], 127);
}