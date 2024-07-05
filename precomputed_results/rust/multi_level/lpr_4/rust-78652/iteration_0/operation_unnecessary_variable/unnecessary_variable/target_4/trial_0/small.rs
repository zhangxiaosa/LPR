#![unstable(
    feature = "humans",
    issue = "none"
)]
#![feature(staged_api)]

struct a;

impl a {
    const fn b() -> u32 {
        42
    }
}

fn main() {}
