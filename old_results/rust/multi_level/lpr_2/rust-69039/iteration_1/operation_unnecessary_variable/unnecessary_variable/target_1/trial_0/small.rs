#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let name_prompt_generator = |b| {
        yield "What is your name?";
        yield "How are you feeling?";
    };
    let mut d = Box::pin(name_prompt_generator);

    match d.as_mut().resume(String::new()) {
        _ => (),
    }

    match d.as_mut().resume(String::new()) {
        GeneratorState::Yielded("What is your name?") => {},
        _ => (),
    }
}
