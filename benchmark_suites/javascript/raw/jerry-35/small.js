// Mutating 5A9E885A-50C5-47A4-9C19-1C1AAF5A8C74 with CodeGenMutator
function F0() {
    if (!new.target) { throw 'must be called with new'; }
    this.b = -2079893588;
    // Executing code generator ClassDefinitionGenerator
    class C3 extends F0 {
        // Executing code generator ClassInstanceComputedPropertyGenerator
        [-2079893588];
        // Code generator finished
    }
    new C3();
    new C3();
    new C3();
    // Code generator finished
}
new F0();
new F0();
new F0();
new Int8Array(6);
new Float32Array(64);
new Uint16Array(893);
var v22 = [];
var v23 = [-584.3914543337536,-Infinity,-1.0,-4.0,0.29139862813149986,1.9835897241645988];
// Executing code generator IntegerGenerator
// Code generator finished
// Executing code generator IntegerGenerator
// Code generator finished
var v30 = [0.0,-1000000000000.0,-2.2250738585072014e-308,1000.0,0.6012328621729836,317.11821045261104];
var v31 = [1000000000.0,0.0];
function F32(a34) {
    if (!new.target) { throw 'must be called with new'; }
    this.h = v23;
}
var v35 = new F32(v30);
var v36 = new F32(v22);
new F32(v31);
var v40 = new Float32Array(10);
new Uint8Array(173);
new Uint8ClampedArray(64);
// Executing code generator InstanceOfGenerator
// Code generator finished
// Executing code generator NumberComputationGenerator
F0 instanceof Float32Array;
Math.atan2(-33471, v40);
-1.7976931348623157e+308 - -5;
-16569 ^ -33471;
var v55 = -33471 << -16569;
// Code generator finished
v55 || -1.7976931348623157e+308;
--v55;
var v58 = 0;
while (v58 < 6) {
    v36[v31] &= 173;
    v23[10] = v35;
    139 ** 173;
    v58++;
}
// CRASH INFO
// ==========
// TERMSIG: 6
// STDERR:
// 
// STDOUT:
// 
// FUZZER ARGS: .build/x86_64-unknown-linux-gnu/debug/FuzzilliCli --profile=jerryscript --inspect=all --storagePath=./output --minimizationLimit=1.0 /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry
// TARGET ARGS: /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry --reprl-fuzzilli
// CONTRIBUTORS: NumberComputationGenerator, ClassInstanceComputedPropertyGenerator, ObjectConstructorGenerator, TypedArrayGenerator, FloatGenerator, IntegerGenerator, ClassDefinitionGenerator, InstanceOfGenerator, InputMutator (type aware), CodeGenMutator
// EXECUTION TIME: 19ms
