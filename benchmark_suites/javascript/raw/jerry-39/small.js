// Mutating 9561506C-469C-4017-8257-F596E08A6E9B with CodeGenMutator
class C3 {
    toString(a5, a6) {
        try { this.get(a5, 4.0, 268435441, this); } catch (e) {}
        this && a5;
        return "boolean";
    }
    constructor(a10, a11) {
        // Executing code generator TypeTestGenerator
        // Code generator finished
        // Executing code generator ConstructorCallGenerator
        super.a;
        typeof a10 === "function";
        var v16;
        try { v16 = new C3(); } catch (e) {}
        // Code generator finished
        // Executing code generator ComputedPropertyAssignmentGenerator
        this[this] = v16;
        // Code generator finished
    }
    static get e() {
        this.__proto__ = "boolean";
        C3.b = 4.0;
        function F18() {
            if (!new.target) { throw 'must be called with new'; }
            this.c = -131922930;
            this.h = -131922930;
            this.f = -131922930;
        }
        for (var v21 = 0; v21 < 32; v21++) {
            this["p" + v21] = v21;
        }
        return this;
    }
}
var v24 = new C3(268435441, "boolean");
new C3(v24, 4.0);
new C3("boolean", v24);
function F34(a36) {
    if (!new.target) { throw 'must be called with new'; }
    this.d = a36;
    this.b = -1799537680;
    this.f = -1799537680;
}
new Array(129);
var v50 = 129 * -974372451;
-v50;
-1000000.0 && -974372451;
-(-1000000.0);
v50++;
Math.sinh(-2.0);
typeof -7n === "symbol";
// CRASH INFO
// ==========
// TERMSIG: 6
// STDERR:
// 
// STDOUT:
// 
// FUZZER ARGS: .build/x86_64-unknown-linux-gnu/debug/FuzzilliCli --profile=jerryscript --inspect=all --storagePath=./output --minimizationLimit=1.0 /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry
// TARGET ARGS: /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry --reprl-fuzzilli
// CONTRIBUTORS: BinaryOperationGenerator, InputMutator, StringGenerator, ClassInstanceMethodGenerator, SpliceMutator, ClassStaticGetterGenerator, ComputedPropertyAssignmentGenerator, SuperPropertyRetrievalGenerator, ClassConstructorGenerator, TypeTestGenerator, FloatGenerator, PrototypeOverwriteGenerator, ClassDefinitionGenerator, CodeGenMutator, FastToSlowPropertiesGenerator, MethodCallGenerator, ConstructorCallGenerator
// EXECUTION TIME: 4ms
