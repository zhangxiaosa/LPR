const a: isize = 10;
const _: &() = std::mem::transmute(a);

fn main() {
    let c;
    match c {
        _b => {}
    }
}