// Mutating 75F7CEDB-4FB9-4F9F-B7CE-89724C24D5BD with SpliceMutator
class C3 {
    // Splicing instruction 20 (ClassAddStaticProperty) from 8A36688E-AA4D-4A31-81E1-758712B18266
    static e = C3;
    // Splicing done
    // Splicing instruction 32 (ClassAddInstanceComputedProperty) from E04F44C8-17F2-41C9-A287-799371EBDED7
    [-9223372036854775807] = C3;
    // Splicing done
    // Splicing instruction 62 (EndClassStaticMethod) from 22E392AF-4644-4BFB-865F-E0244802A560
    static n(a5, a6) {
        var v8 = Symbol.iterator;
        var o17 = {
            [v8]() {
                var v10 = 10;
                var o16 = {
                    next() {
                        v10--;
                        var v14 = v10 == 0;
                        var o15 = {
                            "done": v14,
                            "value": v10,
                        };
                        return o15;
                    },
                };
                return o16;
            },
        };
        return o17;
    }
    // Splicing done
    n(a19) {
        a19[a19] = "C";
        // Splicing instruction 15 (BeginRepeatLoop) from A8B253D8-9C5F-4CCD-8729-43E35997FC82
        var v21 = [5.0,1000.0,82996.90358478599,0.5312329754301782,1.0,-0.0,3.0,-5.083591466170817e+307,-5.0,-2.0];
        for (var v22 = 0; v22 < 32; v22++) {
            v21["p" + v22] = v22;
        }
        // Splicing done
        new Float32Array(129);
        // Splicing instruction 22 (BeginWhileLoopHeader) from 555BD978-CAF9-4E96-9874-90A500892292
        var v28 = new Int16Array(129);
        var v29 = 0;
        while (v29 < 6) {
            v28[a19] *= v29;
            v29++;
        }
        // Splicing done
        new Uint16Array(6);
        new BigUint64Array(0);
        return "C";
    }
}
new C3();
new C3();
new C3();
// Splicing instruction 30 (BinaryOperation) from 4A73C760-AA54-4AC2-ABF5-5913CFA7FFA3
[621.3017638980332,9.554659300675215,-2.2250738585072014e-308,2.2250738585072014e-308,-1.6536454778481927e+308,1000000.0];
var v43 = -2;
var v44 = ++v43;
var v45 = v44 - v44;
// Splicing done
(v45 ** v45) && v43;
[2.220446049250313e-16,1.6675071988833618e+308,-0.0];
[2.2250738585072014e-308,-1000000000.0,691695.2136238609,987031.6285262613];
class C56 {
    constructor(a58) {
        // Splicing instruction 27 (Construct) from 1EB66DC6-629F-4B2A-9776-0580D10FB40F
        new C56(4096);
        // Splicing done
        // Splicing instruction 13 (Construct) from DA301CBE-8715-4BAE-8F6D-91E077FC7843
        new a58(2898);
        // Splicing done
        // Splicing instruction 16 (BeginSwitch) from F26A6E5B-B46D-4644-B265-994DBF12B22F
        var v68 = new Uint8Array(3401);
        switch (1073741824) {
            case 0:
                var g = 0;
                break;
            case v68:
                function F73(a75, a76, a77, a78) {
                    if (!new.target) { throw 'must be called with new'; }
                    this.d = a78;
                    this.g = a75;
                }
                var v79 = new F73(1073741824, 3401, F73, Float64Array);
                var v80 = new F73(1156380912, -7, 3401, -1449207243);
                new F73(1073741824, 1156380912, v80, v79);
                break;
        }
        // Splicing done
        Math.log1p(536870888);
        Math.tanh(2147483647);
        +-426707873;
    }
    static 128;
    static 10;
    d = -1000.0;
}
var v87 = new C56(-1000.0);
new C56("h");
var v89 = new C56(-426707873);
var v91 = ["h",[C56,-426707873,v89,C56,v87]];
var v92 = [-1000.0,v91,v87,v89];
new Date();
var v95 = v92.constructor;
class C96 extends v95 {
    d = v91;
    f;
    // Splicing instruction 9 (ClassAddInstanceComputedProperty) from E64AEB07-F394-4B4A-BA50-4C9AAA376278
    [v95];
    // Splicing done
    // Splicing instruction 100 (BeginClassInstanceMethod) from 93158D40-9676-4AC0-8505-F6D8DECE3576
    n(a98, a99) {
        var v100 = C96();
        v100 = C96;
        return C96;
    }
    // Splicing done
    a;
}
var v104 = new C96();
C96[v104];
v87 instanceof C56;
Date.prototype;
// CRASH INFO
// ==========
// TERMSIG: 6
// STDERR:
// 
// STDOUT:
// 
// FUZZER ARGS: .build/x86_64-unknown-linux-gnu/debug/FuzzilliCli --profile=jerryscript --inspect=all --storagePath=./output --minimizationLimit=1.0 /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry
// TARGET ARGS: /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry --reprl-fuzzilli
// CONTRIBUTORS: ComputedPropertyAssignmentGenerator, SpliceMutator, ClassDefinitionGenerator, FloatArrayGenerator, ClassInstanceMethodGenerator, IntegerGenerator, TypedArrayGenerator
// EXECUTION TIME: 6ms
