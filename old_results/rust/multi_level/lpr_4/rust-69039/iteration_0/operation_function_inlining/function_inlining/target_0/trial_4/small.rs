#![feature(generators, generator_trait)]

fn main() {
    let mut d = Box::pin(|mut b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });
    loop {
        let e = String::new();
        match d.as_mut().resume(e) {
            std::ops::GeneratorState::Yielded(f) => {}
            g => {
                break;
            }
        }
        String::new();
    }
}
