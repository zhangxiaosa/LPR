fn main() {
    let mut d = Box::pin(|_c: String| {
        _c = yield "What is your name?";
    });
}