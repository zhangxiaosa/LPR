#![unstable(
    feature = "humans",
    reason = "who ever let humans program computers, we're apparently really bad at it",
    issue = "none"
)]
#![feature(staged_api)]

#[stable(feature = "rust1", since = "1.0.0")]
const fn b() -> u32 {
    42
}

fn main() {
    // Call site 1
    let result1 = 42;

    // Call site 2
    let result2 = 42;

    // Call site 3
    let result3 = 42;

    // ... continued usage of the inlined value
}