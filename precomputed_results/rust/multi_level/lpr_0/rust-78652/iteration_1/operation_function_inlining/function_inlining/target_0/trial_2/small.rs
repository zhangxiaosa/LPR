#![unstable(feature = "humans", issue = "none")]
#![feature(staged_api)]
struct a;
#[stable(feature = "rust1", since = "1.0.0")]
const B_VALUE: u32 = 42;

fn main() {
    println!("{}", B_VALUE);
}
