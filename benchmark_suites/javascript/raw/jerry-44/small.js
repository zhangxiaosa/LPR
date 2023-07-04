// Mutating FD58C4E0-6464-49CD-A9BB-071D30C665EC with CodeGenMutator
var v1 = 10;
// Executing code generator TrivialFunctionGenerator
function f3() {
    return "1073741824";
}
// Code generator finished
// Executing code generator PropertyAssignmentGenerator
var t8 = "1073741824";
t8.g = v1;
// Code generator finished
// Executing code generator ComparisonGenerator
// Code generator finished
v1 == "maxByteLength";
class C5 {
    8 = "maxByteLength";
    b;
    m(a7) {
        Object.defineProperty(this, "d", { writable: true, enumerable: true, value: this });
        v1--;
        return this;
    }
    constructor(a10) {
        class C12 extends this.constructor {
            ["maxByteLength"] = "1073741824";
        }
        var v13 = new C12();
        v13["1073741824"] = this;
        // Executing code generator ComputedPropertyRetrievalGenerator
        // Code generator finished
        // Executing code generator IntegerGenerator
        ("maxByteLength")[f3];
        var v16 = -14;
        // Code generator finished
        // Executing code generator PrivatePropertyUpdateGenerator
        // Code generator finished
        // Executing code generator ReassignmentGenerator
        // Code generator finished
        v16 = -128;
    }
}
new C5("1073741824");
var v19 = new C5(v1);
var v20 = new C5(v19);
// Executing code generator SwitchBlockGenerator
switch (v20) {
    // Executing code generator SwitchCaseGenerator
    case v19:
        // Executing code generator BooleanGenerator
        // Code generator finished
        break;
    // Code generator finished
}
// Code generator finished
new WeakMap();
[-15,1702973534,1307302874,8,-4294967295,1073741823,1,2212];
[583150713,-536870912,-153441155,-2,1,-39427,-65536,52892083,-11];
[-4294967295,2,9223372036854775807,1073741823,9007199254740992,-9007199254740991,536870912,-1];
[];
var v29 = [-0.0,-0.0,-522.1938654451741,-7.233612086733641,-5.0];
[-1.0,651.91555528762,-1e-15,1.5616899251504817e+308,-8.854905890942304,1.7976931348623157e+308,693.2726530829309,1000000.0,0.430833395311341];
[-5.1357909955748005,-2.2250738585072014e-308,1e-15,-Infinity,1.0292903662330688e+308];
function f35() {
    return 1;
}
function f39() {
    return v29;
}
var v42 = new Float64Array(1954);
new BigInt64Array(14);
new Uint32Array(5);
var v50 = `8${5}clz32${f35 >> -46381}number${v42}yoS5${5}b`;
var v52 = Symbol.toPrimitive;
var o57 = {
    [v52]() {
        b = this;
        return v50;
    },
};
// CRASH INFO
// ==========
// TERMSIG: 11
// STDERR:
// 
// STDOUT:
// 
// FUZZER ARGS: .build/x86_64-unknown-linux-gnu/debug/FuzzilliCli --profile=jerryscript --inspect=all --storagePath=./output --minimizationLimit=1.0 /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry
// TARGET ARGS: /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry --reprl-fuzzilli
// CONTRIBUTORS: SwitchCaseGenerator, ClassInstanceComputedPropertyGenerator, ClassInstanceElementGenerator, ImitationGenerator, ClassDefinitionGenerator, SwitchBlockGenerator, ComputedPropertyAssignmentGenerator, ClassConstructorGenerator, BuiltinObjectInstanceGenerator, ReassignmentGenerator, IntegerGenerator, CodeGenMutator, ClassInstancePropertyGenerator, ComputedPropertyRetrievalGenerator, TrivialFunctionGenerator, PropertyConfigurationGenerator, ComparisonGenerator, ClassInstanceMethodGenerator, BooleanGenerator, IntArrayGenerator, UnaryOperationGenerator, PropertyAssignmentGenerator
// EXECUTION TIME: 50ms
