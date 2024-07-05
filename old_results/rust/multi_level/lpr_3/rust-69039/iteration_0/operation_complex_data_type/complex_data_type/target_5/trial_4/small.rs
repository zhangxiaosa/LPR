fn main() {
    let mut d = Box::pin(|b| {
        let name: String = yield "What is your name?";
        let feeling: String = yield "How are you feeling?";
    });

    loop {
        let e = String::new();
        match d.as_mut().resume(e) {
            GeneratorState::Yielded(f) => {},
            g => {
                break;
            }
        }
        String::new();
    }
}