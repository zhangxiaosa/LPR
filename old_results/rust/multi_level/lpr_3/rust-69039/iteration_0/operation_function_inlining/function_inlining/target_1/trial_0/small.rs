#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });

    loop {
        let e = String::new();
        match Box::pin(|b| { let c = yield "What is your name?"; yield "How are you feeling?"; }).as_mut().resume(e) {
            GeneratorState::Yielded(f) => {}
            g => {
                break;
            }
        }
        String::new();
    }
}
