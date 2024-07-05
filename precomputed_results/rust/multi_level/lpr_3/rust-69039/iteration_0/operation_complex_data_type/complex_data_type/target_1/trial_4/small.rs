#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d: Generator<Box<str>, (), ()> = Box::pin(|b| {
        let c: &str = b;
        yield "How are you feeling?";
    });

    loop {
        let e = String::new();
        match d.as_mut().resume(Box::new("What is your name?")) {
            GeneratorState::Yielded(_f) => {}
            _g => {
                break;
            }
        }
        String::new();
    }
}