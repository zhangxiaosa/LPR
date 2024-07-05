function opt() {
    const arr = [];
    let proto = arr.__proto__;

    proto.unshift(4294967297);
    proto.length = 256;

    const d = [];
    let e = d.__proto__;

    const f = e.pop();
    let g = f;

    // Decomposed variables with primary data types
    const arrLength = arr.length;
    const protoLength = proto.length;
    const protoShiftedValue = proto[0];
    const dLength = d.length;
    const gValue = g;

    return { arrLength, protoLength, protoShiftedValue, dLength, gValue };
}