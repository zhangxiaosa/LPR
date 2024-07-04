#![unstable(feature = "humans", issue = "none")]
#![feature(staged_api)]
struct a;
impl a {
    #[stable(feature = "", since = "")]
    const fn b() {}
}
