#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut generator: Box<pin::Pin<Box<dyn Generator<(), YieldType = &str, Return = ()>>>> =
        Box::pin(|b| {
            let c: &str = yield "What is your name?";
            yield "How are you feeling?";
        });

    loop {
        let e: String = String::new();
        match generator.as_mut().resume(()) {
            GeneratorState::Yielded(_) => {}
            _ => {
                break;
            }
        }
        String::new();
    }
}