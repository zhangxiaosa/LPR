#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d1: std::pin::Pin<Box<dyn std::ops::Generator<Yield = &'static str, Return = ()>>> = Box::pin(|b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });

    loop {
        let mut e: String = String::new();
        match d1.as_mut().resume(Box::new(e)) {
            GeneratorState::Yielded(f) => {}
            g => {
                break;
            }
        }
        String::new();
    }
}