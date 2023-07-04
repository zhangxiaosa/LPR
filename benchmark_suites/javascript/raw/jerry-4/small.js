// Mutating 4C0C5698-C8A0-4C5A-A17A-9B94EAE8B031 with SpliceMutator
function f0() {
    // Splicing instruction 11 (Construct) from 3B1D313A-4F77-45F3-866C-A9AB7E15DA78
    var v3 = [-21112,268435440,-56601,504714277,1893546951];
    new f0(v3, v3);
    // Splicing done
    // Splicing instruction 12 (Construct) from 41A231C3-80CF-4021-B468-53754EB93CD5
    new Uint8Array(3);
    // Splicing done
    var o14 = {
        "f": 273547.2789733652,
        set g(a10) {
            for (var v11 = 0; v11 < 32; v11++) {
                this["p" + v11] = v11;
            }
        },
        "c": "m",
        "h": 273547.2789733652,
        ..."m",
        "d": -3.0,
    };
    return o14;
}
f0();
f0();
f0();
new Uint32Array(512);
var v41 = new BigInt64Array(1);
var v44 = new Uint16Array(449);
[] = v41;
var v45 = `
    var t31 = "a";
    t31.valueOf = 1;
    v41[1.7749500021890263] = v44.byteLength;
`;
eval(v45);
/a\wa\Bb/ugimy;
var [] = "10";
// CRASH INFO
// ==========
// TERMSIG: 6
// STDERR:
// 
// STDOUT:
// 
// FUZZER ARGS: .build/x86_64-unknown-linux-gnu/debug/FuzzilliCli --profile=jerryscript --inspect=all --storagePath=./output --minimizationLimit=1.0 /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry
// TARGET ARGS: /tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee/build/bin/jerry --reprl-fuzzilli
// CONTRIBUTORS: FastToSlowPropertiesGenerator, ObjectLiteralSetterGenerator, ObjectLiteralCopyPropertiesGenerator, ObjectLiteralPropertyGenerator, BigIntGenerator, ObjectBuilderFunctionGenerator, SpliceMutator, IntegerGenerator
// EXECUTION TIME: 4ms
