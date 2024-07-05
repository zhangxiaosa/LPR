#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = {
        let name_prompt = "What is your name?";
        move |b| {
            yield name_prompt;
            yield "How are you feeling?";
        }
    }.into_gen();

    match d.as_mut().resume(()) {
        _ => (),
    }

    match d.as_mut().resume(()) {
        GeneratorState::Yielded(prompt) => if prompt == "What is your name?" {},
        _ => (),
    }
}
