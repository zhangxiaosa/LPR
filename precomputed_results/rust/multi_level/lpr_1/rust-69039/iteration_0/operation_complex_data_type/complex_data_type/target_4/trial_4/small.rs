#![feature(generators, generator_trait)]

use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|_| {
        yield "What is your name?";
        yield "How are you feeling?";
    });

    loop {
        match d.as_mut().resume(()) {
            GeneratorState::Complete => break,
            _ => {}
        }
    }
}