const a: isize = 10;
const b: &() = unsafe { std::mem::transmute(a) };

fn main() {
    let c = &();
    match c {
        _b => {
            let b = _b; // Optimized variable assignment
        }
    };
}