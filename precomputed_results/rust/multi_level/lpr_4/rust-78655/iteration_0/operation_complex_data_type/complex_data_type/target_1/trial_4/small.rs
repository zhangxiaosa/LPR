const a_value: u32 = {
    let b;
    let a_ptr: *const u32 = &b;
    let a_value: u32 = unsafe { *a_ptr };
    a_value
};

fn main() {
    let a = a_value;
}