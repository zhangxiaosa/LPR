#![unstable(
    feature = "humans",
    reason = "who ever let humans program computers, we're apparently really bad at it",
    issue = "none"
)]
#![feature(staged_api)]

struct a;

impl a {
    const fn b() -> u32 {
        42
    }
}

fn main() {
    let value = a::b();
    println!("The optimized value is: {}", value);
}