fn main() {
    let e = String::new();
    match Box::pin(|_| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    }).as_mut().resume(e) {
        _ => {}
    }

    let e = String::new();
    match Box::pin(|_| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    }).as_mut().resume(e) {
        _ => {}
    }
}