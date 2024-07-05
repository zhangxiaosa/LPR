#![feature(generators, generator_trait)]

use std::ops::{Generator, GeneratorState};

fn main() {
    let mut generator = |b| {
        let name_prompt = yield "What is your name?";
        yield "How are you feeling?";
    };
    
    loop {
        let input = String::new();
        match generator.as_mut().resume(input) {
            GeneratorState::Yielded(prompt) => if prompt == "What is your name?" {},
            _ => break,
        }
    }
}