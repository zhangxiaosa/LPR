fn main() {
    let mut d = Box::pin(|b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });

    loop {
        let mut e = String::new();
        match d.as_mut().resume(e) {
            GeneratorState::Yielded(f) => {}
            GeneratorState::Complete(g) => {
                break;
            }
        }
    }
}