#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut closure = Box::pin(|_| {
        let is_name_requested = yield "What is your name?";
        yield "How are you feeling?";
    });

    let state = closure.as_mut().resume("");

    match state {
        GeneratorState::Yielded(prompt) => {
            // Handle the first yielded prompt
            // ...
        }
        _ => {} // Handle other states if necessary
    }
    
    let e2 = String::new();
    match closure.as_mut().resume(e2) {
        GeneratorState::Yielded(prompt) => {
            // Handle the second yielded prompt
            // ...
        }
        _ => {} // Handle other states if necessary
    }
}