fn main() {
    let mut d = Box::pin(|b| {
        let name = yield "What is your name?";
        let feeling = yield "How are you feeling?";
    });

    loop {
        let e = String::new();
        match d.as_mut().resume(e) {
            GeneratorState::Yielded(_) => {}
            _ => {
                break;
            }
        }
        String::new();
    }
}
