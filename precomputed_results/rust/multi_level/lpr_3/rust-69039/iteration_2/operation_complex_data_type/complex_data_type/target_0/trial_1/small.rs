#![feature(generators, generator_trait)]

use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|_| {
        let is_name_requested = yield "What is your name?";
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
