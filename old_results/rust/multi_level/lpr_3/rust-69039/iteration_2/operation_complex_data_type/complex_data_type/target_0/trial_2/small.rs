#![feature(generators, generator_trait)]

use std::ops::{Generator, GeneratorState};

fn main() {
    let d = Box::pin(|_| {
        yield "What is your name?";
        yield "How are you feeling?";
    });

    match d.as_mut().resume(()) {
        _ => {}
    }

    match d.as_mut().resume(()) {
        GeneratorState::Yielded("What is your name?") => {}
        _ => {}
    }
}
