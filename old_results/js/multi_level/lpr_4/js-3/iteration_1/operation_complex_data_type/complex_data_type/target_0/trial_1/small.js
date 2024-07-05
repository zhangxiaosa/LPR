function opt() {
    const funcStr = Function.toLocaleString();
    const undefinedAdded = [undefined].concat(funcStr);
    const paddedStr = undefinedAdded.join('').padEnd(undefinedAdded.length);
    return paddedStr;
}