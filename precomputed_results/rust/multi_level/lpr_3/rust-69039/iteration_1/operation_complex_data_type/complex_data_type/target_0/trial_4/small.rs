#![feature(generators, generator_trait)]

use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d_generator: Box::Pin<dyn Generator<_, Yield = &str, Return = ()>> = Box::pin(|_| {
        let _name = yield "What is your name?";
        yield "How are you feeling?";
    });

    loop {
        let _e = String::new();
        match d_generator.as_mut().resume(_e) {
            GeneratorState::Yielded(_) => {}
            _ => {
                break;
            }
        }
        String::new();
    }
}