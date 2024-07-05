const a_ptr: *const u32 = {
    let b;
    &b
};
const a_value: u32 = *a_ptr;

fn main() {
    let a = a_value;
}