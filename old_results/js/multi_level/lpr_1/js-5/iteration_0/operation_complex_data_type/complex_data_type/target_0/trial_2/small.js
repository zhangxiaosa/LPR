function a() {
}

const functionB = a;
let objectC = {};
let functionD = Proxy;
let objectE = new functionD(functionB, objectC);
let undefinedF;
({ prototype: functionA } = functionB);
const functionG = functionA;
return functionG;