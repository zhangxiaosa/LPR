// Mutating 424F0C92-E101-4CED-BBC6-C0FFE127E8F8 with CodeGenMutator
function f0() {
}
[45996,-50204,1];
var v2 = [-1073741824,5,0,2147483648,1476061029];
[-1400248890,9223372036854775807,-9223372036854775808];
new Uint16Array(4);
new Int16Array(64);
new BigInt64Array(256);
[-1.7976931348623157e+308,-5.173594621067138e+307,1000000.0,-7.954281646700501,0.9906988249667447,556971.3382780482,0.8746310534837705,2.2250738585072014e-308,-1000000000000.0];
[Infinity,-6.686281856641953,0.0,-1.0427204105993977e+308,-1.7976931348623157e+308,1000000000.0];
[2.220446049250313e-16,-446824.9350000166];
function f17() {
    var o27 = {
        ...false,
        o() {
            this[false];
            var v20 = 0;
            do {
                v20++;
            } while (v20 < 4)
            return false;
        },
    };
    return o27;
}
var v28 = f17();
var v29 = f17();
var v30 = f17();
var v31 = [-9223372036854775808,-2147483649,0,-16649,1000,65536];
var v32 = [512,-65537,-9223372036854775807,27646,4294967295,4294967296,59618,-2032213580,1,864458092];
var v33 = [1,-12,128,11,1039581114,-647350052,-11];
function F34(a36, a37, a38, a39) {
    if (!new.target) { throw 'must be called with new'; }
    // Executing code generator ClassDefinitionGenerator
    class C40 extends F34 {
        // Executing code generator ClassStaticPropertyGenerator
        static a;
        // Code generator finished
        // Executing code generator ClassInstancePropertyGenerator
        b = v30;
        // Code generator finished
    }
    new C40();
    new C40();
    new C40();
    // Code generator finished
    this.h = a36;
}
var v44 = new F34(v30, v33, v32, v31);
var v45 = new F34(v30, v33, v32, v31);
var v46 = new F34(v28, v33, v33, v31);
function f47(a48, a49, a50) {
    var o70 = {
        n(a52, a53, a54, a55) {
            v32.__proto__ = a48;
            a50[v32] <<= a49;
            function F56(a58, a59, a60, a61) {
                if (!new.target) { throw 'must be called with new'; }
                this.d = a58;
            }
            new F56(a50, a49, v31, v32);
            new F56(v28, a53, a53, a53);
            // Executing code generator SuperPropertyRetrievalGenerator
            // Code generator finished
            // Executing code generator IntegerGenerator
            // Code generator finished
            // Executing code generator BinaryOperationGenerator
            // Code generator finished
            super.a;
            a50 / f17;
            new F56(v30, a53, v44, a52);
            return this;
        },
        "e": a48,
        "f": a49,
    };
    return o70;
}
f47(v44, v44, v29);
f47(v44, v32, v28);
f47(v44, v29, v30);
v45[7] = v46;
for (var v74 = 0; v74 < 12; v74++) {
    var v77 = new Uint8ClampedArray(5);
    new Float64Array(2);
    // Executing code generator ForInLoopGenerator
    for (var v81 in v33) {
        // Executing code generator DestructArrayAndReassignGenerator
        [v2,,f17] = v77;
        // Code generator finished
    }
    // Code generator finished
    // Executing code generator PropertyRetrievalGenerator
    // Code generator finished
    // Executing code generator IntegerGenerator
    // Code generator finished
    v30.e;
    new Int32Array(64);
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
// CONTRIBUTORS: ClassDefinitionGenerator, ClassInstancePropertyGenerator, ClassStaticPropertyGenerator, ForInLoopGenerator, BinaryOperationGenerator, IntArrayGenerator, FloatArrayGenerator, PropertyRetrievalGenerator, DestructArrayAndReassignGenerator, SuperPropertyRetrievalGenerator, IntegerGenerator, CodeGenMutator, TrivialFunctionGenerator, TypedArrayGenerator
// EXECUTION TIME: 16ms
