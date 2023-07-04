// Mutating 5AD8AEC2-564B-45C8-8F1C-6E84A16020DA with SpliceMutator
function F3(a5) {
    if (!new.target) { throw 'must be called with new'; }
    // Splicing instruction 51 (CallMethod) from ECE4BF4B-09BE-4488-9FF9-1AB36019ECF4
    var v7 = new F3(2);
    // Splicing done
    Math.round(2147483648);
    Math.sign(v7);
    this.h = -9223372036854775808;
}
new F3(-9223372036854775808);
var v13 = new F3(375326888);
new F3(-9223372036854775808);
// Splicing instruction 24 (Compare) from DD162ED3-C9F3-4B28-8F81-9F2DE59EF366
// Splicing done
// Splicing instruction 1 (CreateArray) from 4F488AF3-EF88-4F9A-921F-8EFC164AB483
1073741823 != v13;
var v16 = [];
// Splicing done
// Splicing instruction 26 (UnaryOperation) from 1C4B1E45-F021-4CBC-8C14-A601D73F1BF8
// Splicing done
[v16,v16,v16];
-0.8402741450013835;
new Int16Array(7);
new BigUint64Array(3);
new BigInt64Array(334);
var v30 = Float64Array;
// Splicing instruction 17 (CallMethod) from 61FA000D-8223-4FF1-B75E-F6E87927260B
try { ("setMonth").endsWith("setMonth", "bigint"); } catch (e) {}
// Splicing done
// Splicing instruction 14 (GetProperty) from 4F295100-D468-4B90-8E9C-88541E30CE58
// Splicing done
(4294967295).match;
new v30(1437);
var v37 = 3644;
// Splicing instruction 23 (UnaryOperation) from BAE29F99-0AA5-48D9-B7FB-B98053D54E41
var v39 = 0;
// Splicing done
// Splicing instruction 30 (Construct) from 44A66F2A-4139-4565-A24A-C5A08CB74DE6
v39++;
var o43 = {
    "maxByteLength": 257,
};
new SharedArrayBuffer(257, o43);
// Splicing done
var v46 = new Uint8ClampedArray(v37);
// Splicing instruction 24 (DeleteElement) from 9A66B709-914C-48A0-96B3-60860D439DBB
var v50 = new Uint8ClampedArray(2507);
// Splicing done
// Splicing instruction 19 (SetProperty) from 40CBFC35-E363-4E06-BEC4-89E6E4B704C7
delete v50[1];
var v54 = new Uint16Array(16);
var v57 = new Int16Array(8);
v54.valueOf = ([-1.0,-3.0,4.06260044186579,-0.0,1.431882971327682e+307,0.021615066800569682,-846031.2858569428,0.9022943533262645,-7.536386895360831])["push"]("push", v57, 66);
// Splicing done
var v63 = new Int32Array(3717);
v37 = 1437;
for (var v67 = 0; v67 < 32; v67++) {
    [127,3,-13961,127,2,54636,-39103,-65536,2];
    [2147483648,236568972,7,15,9];
    [1073741825];
}
try { v63.join(v30); } catch (e) {}
++v30;
try { v46.toLocaleString(v30, v46); } catch (e) {}
// Splicing instruction 20 (Construct) from E064EED2-E56E-423D-B553-DDE74662BCFE
class C76 {
    static a;
    16;
    2526;
    [1744000100];
    static get h() {
        var v78 = this % -1419980519;
        for (var v79 = 0; v79 < 32; v79++) {
            this["p" + v79] = v79;
        }
        return v78;
    }
}
new C76();
// Splicing done
// CRASH INFO
// ==========
// TERMSIG: 6
// STDERR:
// 
// STDOUT:
// 
// FUZZER ARGS: .build/x86_64-unknown-linux-gnu/debug/FuzzilliCli --profile=jerryscript --inspect=all --storagePath=./output --minimizationLimit=1.0 /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry
// TARGET ARGS: /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry --reprl-fuzzilli
// CONTRIBUTORS: IntegerGenerator, TypedArrayGenerator, SpliceMutator, ObjectConstructorGenerator
// EXECUTION TIME: 2ms
