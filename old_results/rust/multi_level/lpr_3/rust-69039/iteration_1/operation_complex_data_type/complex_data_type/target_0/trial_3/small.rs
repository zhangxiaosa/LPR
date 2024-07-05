#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};
fn main() {
    let mut d: std::pin::Pin<Box<dyn std::ops::Generator<_, Yield = &str, Return = ()>>> = Box::pin(|_| {
        let _name: String = yield "What is your name?";
        yield "How are you feeling?";
    });
    loop {
        let _e: String = String::new();
        match d.as_mut().resume(_e) {
            GeneratorState::Yielded(_) => {}
            _ => {
                break;
            }
        }
        String::new();
    }
}