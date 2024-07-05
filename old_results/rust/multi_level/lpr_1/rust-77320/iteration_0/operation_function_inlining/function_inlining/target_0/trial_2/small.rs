const a: isize = 10;
const b: &() = std::mem::transmute(a);
{
    match &() {
        b => 9,
    };
}