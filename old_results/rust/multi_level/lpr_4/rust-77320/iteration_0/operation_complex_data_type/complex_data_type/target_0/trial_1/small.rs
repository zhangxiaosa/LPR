const a: isize = 10;
const b_ref: *const () = std::mem::transmute(a);
const c: () = unsafe { *b_ref };

fn main() {
    match &c {
        _ => 9,
    };
}