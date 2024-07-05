const a: isize = 10;
const b: &() = std::mem::transmute(a);

fn main() {
    let _b;
    match _b {
        _ => {
            let b = _;
        }
    }
}