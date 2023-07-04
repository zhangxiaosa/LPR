// Mutating 8DE40D22-55E5-42BA-B7C4-E095CD410DD7 with InputMutator
function F3(a5, a6) {
    if (!new.target) { throw 'must be called with new'; }
    // Replacing input 0 (v10) with v3
    a6 < 2;
    var v11 = new F3(209);
    // Replacing input 1 (v6) with v11
    this.a = v11;
    this.h = a6;
    this.b = a6;
}
// Replacing input 2 (v0) with v0
new F3(-0.0, -1000.0);
new F3(-1.0, -1.0);
new F3(-1000.0, -0.0);
new Int32Array(3);
new Uint16Array(42);
new Uint32Array(2747);
function f28() {
    return "FgP";
}
// Replacing input 0 (v29) with v19
var v30 = new Uint16Array();
// Replacing input 1 (v35) with v2
new Array(-1.0);
var v37 = 0;
do {
    var v38;
    try { v38 = ("0Es").includes(v37, 74); } catch (e) {}
    var t29 = ["268435441",v38,v30,[[v38],v38,v38,"268435441","-10"],v30];
    t29[v37] *= v37;
    v37++;
} while (v37 < 3)
// CRASH INFO
// ==========
// TERMSIG: 6
// STDERR:
// 
// STDOUT:
// 
// FUZZER ARGS: .build/x86_64-unknown-linux-gnu/debug/FuzzilliCli --profile=jerryscript --inspect=all --storagePath=./output --minimizationLimit=1.0 /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry
// TARGET ARGS: /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry --reprl-fuzzilli
// CONTRIBUTORS: ObjectConstructorGenerator, TypedArrayGenerator, SpliceMutator, FloatGenerator, InputMutator
// EXECUTION TIME: 3ms
