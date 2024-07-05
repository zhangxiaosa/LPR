function opt() {
    const initialValue = 4294967297; // Number
    const arrayLength = 256; // Number

    const newArray = new Array(arrayLength); // Array
    newArray[0] = initialValue;

    const lastItem = newArray.pop(); // Number
    const result = lastItem;

    return result;
}