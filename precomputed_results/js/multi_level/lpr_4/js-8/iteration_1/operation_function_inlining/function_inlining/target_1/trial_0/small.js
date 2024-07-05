const array = [];
array.__proto__.unshift(array.__proto__.toLocaleString());
try {
    const array = [];
    array.__proto__.unshift(array.__proto__.toLocaleString());
} catch {
    function e() {}
}
return e;