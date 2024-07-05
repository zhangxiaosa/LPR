#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|_b| {
        yield "What is your name?";
        yield "How are you feeling?";
    });

    loop {
        let _e = String::new();
        match d.as_mut().resume(_e) {
            GeneratorState::Yielded(_f) => {}
            _g => break,
        }
        String::new();
    }
}
