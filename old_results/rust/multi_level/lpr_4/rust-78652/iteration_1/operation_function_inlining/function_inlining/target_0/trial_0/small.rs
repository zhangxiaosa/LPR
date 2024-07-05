#![unstable(feature = "humans", issue = "none")]
#![feature(staged_api)]
struct a;

impl a {
    #[inline(always)]
    #[stable(feature = "rust1", since = "1.0.0")]
    const fn b() -> u32 {
        42
    }
}

fn main() {
    let result = 42; // Replace calls to `a::b()` with the constant value `42`.
    println!("Result: {}", result);
}