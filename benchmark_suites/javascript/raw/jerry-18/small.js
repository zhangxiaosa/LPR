// Mutating 8830C9A8-D229-44C9-892A-0D9F081FA7F0 with InputMutator (type aware)
class C3 {
    static set b(a5) {
        // Replacing input 4 (v1) with v4
        try { a5("lZW", "lZW", this, this); } catch (e) {}
        // Replacing input 0 (v1) with v2
        "lZW" >= this;
        var t6 = "lZW";
        t6.valueOf = a5;
        // Replacing input 0 (v7) with v7
        var {"b":v9,"c":v10,"h":v11,} = this;
    }
    constructor(a13, a14) {
        try {
            // Replacing input 1 (v12) with v3
            super.setInt8("lZW", C3, a14, a14);
        } catch(e16) {
        }
        // Replacing input 0 (v20) with v3
        new C3();
    }
}
new C3("string", "string");
new C3("string", C3);
new C3(C3, "string");
new BigInt64Array(608);
new Uint8ClampedArray(746);
// Replacing input 0 (v32) with v32
new Float32Array(4);
// Replacing input 1 (v37) with v31
[1000000000.0,-2.5283666327443255,-2.220446049250313e-16,0.9349436663240588,-0.0,-2.220446049250313e-16,-253.94607723914953,78038.91983489785,-360.19646322110543,-1.0];
[NaN];
[853723.0859129871,-1000.0,2.220446049250313e-16,-1000.0,1.7976931348623157e+308,-1.0,-1.4916005712403855e+308,-648.4092480466059];
new Uint8Array(4);
// Replacing input 1 (v40) with v25
var v42 = new Int16Array(608);
var v45 = new Float64Array(42);
var v47 = -1;
Math.round(+v45);
var v51 = v45 | v47;
v47 = v51;
v42.length = v51;
v42[42] = v45;
v45 instanceof Int16Array;
// CRASH INFO
// ==========
// TERMSIG: 6
// STDERR:
// 
// STDOUT:
// 
// FUZZER ARGS: .build/x86_64-unknown-linux-gnu/debug/FuzzilliCli --profile=jerryscript --inspect=all --storagePath=./output --minimizationLimit=1.0 /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry
// TARGET ARGS: /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry --reprl-fuzzilli
// CONTRIBUTORS: CallbackPropertyGenerator, BuiltinObjectInstanceGenerator, ClassConstructorGenerator, SuperMethodCallGenerator, StringGenerator, ComparisonGenerator, ClassStaticSetterGenerator, DestructObjectGenerator, ClassDefinitionGenerator, TypedArrayGenerator, InputMutator (type aware), ThisGenerator, IntegerGenerator, FunctionCallGenerator
// EXECUTION TIME: 4ms
