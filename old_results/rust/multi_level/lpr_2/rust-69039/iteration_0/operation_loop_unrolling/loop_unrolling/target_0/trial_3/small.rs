fn main() {
    let mut d = Box::pin(|b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });

    let e = String::new();
    match d.as_mut().resume(e) {
        _ => {}
    }

    let e = String::new();
    match d.as_mut().resume(e) {
        _ => {}
    }
}
