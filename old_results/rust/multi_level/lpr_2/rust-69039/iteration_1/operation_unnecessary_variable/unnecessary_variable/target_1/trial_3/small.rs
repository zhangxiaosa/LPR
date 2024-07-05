#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b| {
        yield "What is your name?";
        yield "How are you feeling?";
    });

    match d.as_mut().resume(String::new()) {
        _ => (),
    }

    match d.as_mut().resume("What is your name?".to_owned()) {
        GeneratorState::Yielded(prompt) => if prompt == "What is your name?" {},
        _ => (),
    }
}
