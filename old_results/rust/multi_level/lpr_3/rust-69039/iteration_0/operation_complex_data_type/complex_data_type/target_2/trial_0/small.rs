use std::ops::{Generator, GeneratorState};

fn main() {
    let mut state = Box::pin(|b| {
        let name: String = yield "What is your name?";
        yield "How are you feeling?";
    });

    loop {
        let e = String::new();
        match state.as_mut().resume(e) {
            GeneratorState::Yielded(_) => {}
            _ => break,
        }
    }
}