// Mutating 708F5A49-2C85-4D03-9B07-301C43C7CEB7 with InputMutator (type aware)
new Float64Array();
function F2(a4) {
    if (!new.target) { throw 'must be called with new'; }
    this.h = a4;
    // Replacing input 1 (v0) with v4
    this.c = a4;
}
// Replacing input 1 (v0) with v0
var v5 = new F2(Float64Array);
new F2(F2);
new F2(v5);
function f8() {
    return v5;
}
[-5,386989220,16,336221498,-268435456];
[1073741823,53865,128,-1,1675570130];
[1085898644,800223931,-64691,1416843188];
[-6.748621411146778];
var v13 = [-1.0];
var v14 = [-3.0,3.0,-581.8272262793722,6.998412405897049e+307,0.47873677848181195,Infinity,-1.0];
function f15() {
    return v14;
}
[129,-1024,129,3,4294967295,268435439];
var v17 = [-4294967297,13572,6,9,64771,30608,1,9070,-1186482673];
[128,-15913,-9223372036854775807,-22479,50839,1000];
function f19() {
    var o23 = {
        // Replacing input 1 (v21) with v21
        ["o"]: "o",
        "h": 5.566795687069813,
        "e": 5.566795687069813,
        3: "o",
        "c": "1537867226",
        // Replacing input 0 (v21) with v20
        "a": "1537867226",
        "b": "o",
        ..."1537867226",
        // Replacing input 0 (v21) with v20
        ..."1537867226",
        // Replacing input 0 (v20) with v20
        "f": "1537867226",
        // Replacing input 0 (v22) with v22
        "g": 5.566795687069813,
    };
    // Replacing input 1 (v24) with v24
    new Uint16Array(7);
    // Replacing input 0 (v28) with v19
    var v29 = new f19(2968);
    function f30() {
        return v29;
    }
    return o23;
}
// Replacing input 0 (v19) with v8
// Replacing input 0 (v19) with v2
f8();
f19();
F2();
var [v43] = "then";
for (var v44 = 0; v44 < 32; v44++) {
    v43["p" + v44] = v44;
}
// Replacing input 0 (v38) with v39
var v48 = [v43];
Reflect.apply(("xh").matchAll, "o6BI", v48, v17, 7n, v13);
// CRASH INFO
// ==========
// TERMSIG: 6
// STDERR:
// 
// STDOUT:
// 
// FUZZER ARGS: .build/x86_64-unknown-linux-gnu/debug/FuzzilliCli --profile=jerryscript --inspect=all --storagePath=./output --minimizationLimit=1.0 /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry
// TARGET ARGS: /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry --reprl-fuzzilli
// CONTRIBUTORS: SpliceMutator, ObjectConstructorGenerator, FloatArrayGenerator, IntArrayGenerator, TrivialFunctionGenerator, OperationMutator, InputMutator (type aware), BuiltinObjectInstanceGenerator
// EXECUTION TIME: 27ms
