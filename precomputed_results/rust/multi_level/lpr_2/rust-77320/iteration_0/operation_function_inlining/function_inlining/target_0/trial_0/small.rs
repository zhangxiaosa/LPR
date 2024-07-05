const a: isize = 10;
const b: &() = std::mem::transmute(a);

{ "program": "match &() { b => 9, }" }
