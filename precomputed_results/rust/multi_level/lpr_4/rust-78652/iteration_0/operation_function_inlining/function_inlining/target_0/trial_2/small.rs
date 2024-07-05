#![unstable(
    feature = "humans",
    reason = "who ever let humans program computers, we're apparently really bad at it",
    issue = "none"
)]
#![feature(staged_api)]
struct a;
impl a {
    #[stable(feature = "rust1", since = "1.0.0")]
    const B: u32 = 42;
}

fn main() {
    let result = a::B; // Function call to `b` is replaced with the return value of `b`, which is `42`.
    println!("{}", result);
}