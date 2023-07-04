// Mutating 0D706673-E18D-4B03-B32E-855122CE4DE2 with OperationMutator
function F0() {
    if (!new.target) { throw 'must be called with new'; }
    this.h = 2;
    this.b = 2;
    this.g = 2;
    function f4() {
        return 9223372036854775807n;
    }
    var v5 = [-4294967295,536870889,8,-568667850,129,536870887,-268435456];
    var o7 = {
        __proto__: v5,
        ...F0,
        "g": v5,
    };
    1024 >>> o7;
}
var v9 = new F0();
var v10 = new F0();
var v11 = new F0();
function F12(a14, a15) {
    if (!new.target) { throw 'must be called with new'; }
    this.f = v11;
}
var v16 = new F12(v10, v10);
var v17 = new F12(v10, v11);
var v18 = new F12(v10, v17);
function F19(a21, a22) {
    if (!new.target) { throw 'must be called with new'; }
    this.h = v18;
    this.d = v9;
}
new F19(v18, v11);
new F19(v17, v10);
new F19(v16, v11);
var v31 = new Uint8ClampedArray(127);
var v33 = BigInt64Array;
var v34 = new v33(1069);
for (let i37 = 0, i38 = 10; i37 < i38; i37++, i38--) {
    continue;
}
var v48 = new Uint8ClampedArray(59);
for (let [i63, i64] = (() => {
        var v50 = 0;
        [,,v33,v50] = v48;
        v31.c = v50;
        Date[5];
        var v55 = 2 >> v31;
        Math.floor(2);
        var v57 = ~v55;
        // Mutating next operation
        v31 + ++v57;
        v31--;
        v57 % v31;
        return [v50, 65536];
    })();
    i63 < i64;
    i63++, i64--) {
    new Uint16Array(16);
    async function f76(a77, a78, a79, a80) {
        v34 = i63;
        await Uint8ClampedArray;
        return Date;
    }
    f76(4, 59, v31, i64);
    new Float64Array(4);
    new BigInt64Array(3472);
}
new Date();
new Map();
new Uint8Array(2844);
var v99 = 0;
// Mutating next operation
v99++;
var v104 = new F19(43120, F19, -4);
var v105 = new F19(2147483648, v104, -4);
v33[v33] = v105;
class C107 {
    static ["o"];
    6 = "c";
    static set g(a109) {
        this.h = this;
        for (var v110 = 0; v110 < 83; v110++) {
            var v114 = ~-2.220446049250313e-16;
            new Uint8ClampedArray(10);
            var v120 = new a109(3644);
            [...v120,...C107,,];
            v114 + v110;
            Math.min(-2.220446049250313e-16);
            v114 >>> -2.220446049250313e-16;
            -v110;
        }
        try { ("c").normalize(this, Date); } catch (e) {}
    }
    static toString(a129, a130) {
        function f131() {
            return a130;
        }
        return a130;
    }
    o(a133, a134) {
        C107 = C107;
        C107 | "MhPiE";
        return C107;
    }
}
new C107();
var v143 = new C107();
new C107();
-Infinity;
var v148;
try { v148 = v143.cbrt(); } catch (e) {}
try { ("function").lastIndexOf(-5.0, v148); } catch (e) {}
var v155 = new Int16Array(3);
function F157(a159, a160, a161, a162) {
    if (!new.target) { throw 'must be called with new'; }
    this.d = a161;
    this.b = a162;
    this.g = Int16Array;
}
var v163 = new F157(3, 3, 18, 4);
// Mutating next operation
v155[v163];
[C107,1000000000.0,-198145845,[-5.0,1000000000.0,[3]]];
"function" - 1000000000.0;
C107.length = 3;
// CRASH INFO
// ==========
// TERMSIG: 6
// STDERR:
// 
// STDOUT:
// 
// FUZZER ARGS: .build/x86_64-unknown-linux-gnu/debug/FuzzilliCli --profile=jerryscript --inspect=all --storagePath=./output --minimizationLimit=1.0 /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry
// TARGET ARGS: /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry --reprl-fuzzilli
// CONTRIBUTORS: SpliceMutator, OperationMutator, ObjectConstructorGenerator, BigIntGenerator
// EXECUTION TIME: 63ms
