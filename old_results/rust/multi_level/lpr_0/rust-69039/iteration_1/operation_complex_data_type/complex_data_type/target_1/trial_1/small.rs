fn main() {
    let mut d_generator = Box::pin(|_: ()| {
        let c: &str = yield "What is your name?";
        yield "How are you feeling?";
    });
    let e: String = String::new();
    match d_generator.as_mut().resume(()) {
        _ => {}
    }
    let e: String = String::new();
    match d_generator.as_mut().resume(()) {
        _ => {}
    }
}
