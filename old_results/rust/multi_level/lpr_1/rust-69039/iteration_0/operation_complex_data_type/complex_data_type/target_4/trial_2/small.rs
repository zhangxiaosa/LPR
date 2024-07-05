use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });
    loop {
        let e: String = String::new();
        match d.as_mut().resume(&mut e) {
            GeneratorState::Yielded(_) => {}
            _ => {
                break;
            }
        }
    }
}