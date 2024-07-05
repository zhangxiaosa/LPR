#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut _d = Box::pin(|_b| {
        let name_prompt = yield "What is your name?";
        yield "How are you feeling?";
    });

    loop {
        let _input = String::new();
        match _d.as_mut().resume(_input) {
            GeneratorState::Yielded(prompt) => {
                // Removed the if statement
            }
            _ => break,
        }
    }
}