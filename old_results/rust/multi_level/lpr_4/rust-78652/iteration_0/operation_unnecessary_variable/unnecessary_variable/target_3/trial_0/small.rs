#![unstable(
    feature = "humans",
    reason = "whoever let humans program computers, we're apparently really bad at it"
)]
#![feature(staged_api)]

struct a;

impl a {
    const fn b() -> u32 {
        42
    }
}

fn main() {}
