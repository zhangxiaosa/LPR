#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = {
        let mut b = String::new();

        // Inline generator body
        let mut generator = move || {
            let name_prompt = yield "What is your name?";
            yield "How are you feeling?";
        };

        GeneratorState::Yielded(generator.resume(b))
    };

    loop {
        let input = String::new();

        match d {
            GeneratorState::Yielded(prompt) => {
                if prompt == "What is your name?" {}
            }
            _ => break,
        }

        d = {
            let mut generator = {
                let mut b = input;
                move || generator.resume(b)
            };
            generator.resume(())
        };
    }
}