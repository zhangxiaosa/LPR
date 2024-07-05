#![feature(generators, generator_trait)]

fn main() {
    let mut d = Box::pin(|b| {
        let _ = yield "What is your name?";
        yield "How are you feeling?";
    });
    
    loop {
        match d.as_mut().resume(String::new()) {
            std::ops::GeneratorState::Yielded(_) => {},
            _ => break,
        }
    }
}
