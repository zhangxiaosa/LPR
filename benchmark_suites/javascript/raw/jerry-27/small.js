// Start of prefix code
// Executing code generator BigIntGenerator
// Code generator finished
// Executing code generator ClassDefinitionGenerator
class C3 {
    // Executing code generator ClassInstanceSetterGenerator
    set e(a5) {
        // Executing code generator MethodCallGenerator
        var v6;
        try { v6 = this.n(10n); } catch (e) {}
        // Code generator finished
        // Executing code generator ComparisonGenerator
        // Code generator finished
        v6 < -1528519756n;
    }
    // Code generator finished
    // Executing code generator ClassConstructorGenerator
    constructor(a9, a10) {
        // Executing code generator ConstructorCallGenerator
        try { new a10(-1528519756n, a10); } catch (e) {}
        // Code generator finished
        // Executing code generator TypedArrayGenerator
        new Int8Array(128);
        new BigUint64Array(14);
        new Uint8Array(3463);
        // Code generator finished
    }
    // Code generator finished
}
var v21 = new C3(10n, C3);
new C3(-1528519756n, -1528519756n);
new C3(-61423n, v21);
// Code generator finished
// Executing code generator ObjectConstructorGenerator
function F24(a26, a27, a28) {
    if (!new.target) { throw 'must be called with new'; }
    this.d = -61423n;
}
var v29 = new F24(10n, -1528519756n, -1528519756n);
new F24(10n, -61423n, -1528519756n);
var v31 = new F24(-1528519756n, 10n, 10n);
// Code generator finished
// End of prefix code. 11 variables are now visible
// Executing code generator ComputedMethodCallGenerator
var v33;
try { v33 = v31["m"](F24); } catch (e) {}
// Code generator finished
// Executing code generator ComputedPropertyAssignmentGenerator
v29[v33] = v31;
// Code generator finished
// Executing code generator UnaryOperationGenerator
// Code generator finished
// Executing code generator IfElseGenerator
if (+v31) {
    // Executing code generator MethodCallWithDifferentThisGenerator
    // Code generator finished
    // Executing code generator PrototypeOverwriteGenerator
    v31.__proto__ = v21;
    // Code generator finished
    // Executing code generator ComputedPropertyUpdateGenerator
    v31[v21] ^= v33;
    // Code generator finished
} else {
    // Executing code generator BigIntGenerator
    // Code generator finished
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
// CONTRIBUTORS: ComparisonGenerator, MethodCallGenerator, ClassDefinitionGenerator, IfElseGenerator, ComputedPropertyAssignmentGenerator, ObjectConstructorGenerator, ConstructorCallGenerator, BigIntGenerator, ComputedPropertyUpdateGenerator, ClassInstanceSetterGenerator, ClassConstructorGenerator, UnaryOperationGenerator, TypedArrayGenerator, ComputedMethodCallGenerator, PrototypeOverwriteGenerator
// EXECUTION TIME: 2ms
