#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = || {
        yield "What is your name?";
        yield "How are you feeling?";
    };

    loop {
        let input = String::new();
        if let GeneratorState::Yielded(prompt) = d.as_mut().resume(input) {
            if prompt == "What is your name?" {}
        } else {
            break;
        }
    }
}
