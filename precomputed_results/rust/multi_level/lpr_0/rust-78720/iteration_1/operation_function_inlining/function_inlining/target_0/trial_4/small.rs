trait b {
    fn d<e>(self, e) -> f<e> {}
}
struct f<c> {
    h: e,
}
impl<e> b for e {}

fn main() {
    let empty_closure = || "";
    f { h: empty_closure }
}