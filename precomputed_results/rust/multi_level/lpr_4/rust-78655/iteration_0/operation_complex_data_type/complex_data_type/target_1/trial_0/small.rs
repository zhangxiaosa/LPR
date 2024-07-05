const a: *const u32 = &b;

fn main() {
    let value_of_b = unsafe { *a };
    println!("Value of b: {}", value_of_b);
}