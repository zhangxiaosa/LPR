// Mutating 3DEBC2C0-CCE2-4918-B246-300EFBF0E5D9 with SpliceMutator
function F0() {
    if (!new.target) { throw 'must be called with new'; }
    // Splicing instruction 11 (Construct) from 3C278EAE-5BA2-4A4D-9AAE-313F0B51ED7D
    new F0(2);
    // Splicing done
    // Splicing instruction 25 (CallFunctionWithSpread) from E6FE10E4-7890-4B19-B0C8-A37EB159DE57
    var v8 = new Int32Array(1079);
    var v11 = new F0(156);
    var v15 = 2545 == (128 === v11);
    try {
    var t0 = 1073741825;
    t0(273, Float64Array, ...v15, ...v8, ...F0);
    } catch (e) {}
    // Splicing done
    this.f = 1073741825;
    this.a = 1073741825;
    this.e = 1073741825;
}
var v17 = new F0();
new F0();
new F0();
new F0(4);
var v25 = new Uint8ClampedArray(v17);
// Splicing instruction 5 (Construct) from 9DA8661D-4923-4E87-9945-396788160F1B
new Int32Array(10);
// Splicing done
// Splicing instruction 29 (CallMethod) from FE381068-3B25-47FE-B064-E645A5161F30
var v33 = -38069 << -912993.8638046075;
// Splicing done
Math.acos(v33);
Math.atan2(-v33, Uint8ClampedArray);
new Uint16Array(3526);
[-105408.3240988442];
[0.7174999910571265,-8.019362372077097,-2.220446049250313e-16,1000000000000.0,-5.0,4.0];
[0.0007031740933752806,1000000.0,1.7976931348623157e+308,-9.694913305177092,1e-15,-1.535976961049986,-909.841795150651,-1.7976931348623157e+308,-Infinity,3.0];
new F0();
new Int8Array(206);
new Uint32Array(64);
// Splicing instruction 28 (CallComputedMethod) from 54539DD1-BBB7-4540-B5F5-2274F49B14E9
var v57 = new BigUint64Array(36);
var v60 = new BigInt64Array(10);
// Splicing done
v60["lastIndexOf"](v57, 65536);
var v65 = new Uint16Array(10);
// Splicing instruction 14 (CallFunction) from 3C278EAE-5BA2-4A4D-9AAE-313F0B51ED7D
typeof -25440;
"undefined" === "undefined";
var v72 = v25 > Uint16Array;
try { v25(v25, v25, v72); } catch (e) {}
// Splicing done
// Splicing instruction 5 (Construct) from 0415CD66-66CF-464F-9651-B885A09A8DAE
var v74 = [];
function F75() {
    if (!new.target) { throw 'must be called with new'; }
    this.c = v74;
}
new F75();
// Splicing done
("bigint")["concat"](1073741825, "concat");
var t59 = v65.buffer;
t59[2] = v17;
// CRASH INFO
// ==========
// TERMSIG: 6
// STDERR:
// 
// STDOUT:
// [COV] edge counters initialized. Shared memory: shm_id_5568_0 with 14543 edges
// FUZZER ARGS: .build/x86_64-unknown-linux-gnu/debug/FuzzilliCli --profile=jerryscript --inspect=all --storagePath=./output --minimizationLimit=1.0 /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry
// TARGET ARGS: /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry --reprl-fuzzilli
// CONTRIBUTORS: InputMutator, ObjectConstructorGenerator, TypedArrayGenerator, SpliceMutator, InputMutator (type aware)
// EXECUTION TIME: 3ms
