#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    loop {
        let input = String::new();
        match Box::pin(|_| {
            let name_prompt = yield "What is your name?";
            yield "How are you feeling?";
        }).as_mut().resume(input) {
            GeneratorState::Yielded(prompt) => if prompt == "What is your name?" {},
            _ => break,
        }
    }
}