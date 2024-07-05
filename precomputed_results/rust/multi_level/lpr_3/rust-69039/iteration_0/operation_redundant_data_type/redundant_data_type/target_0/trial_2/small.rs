#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState, Pin};
fn main() {
    let mut d = Pin::new(|b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });
    loop {
        let e = String::new();
        match Pin::as_mut(&mut d).resume(e) {
            GeneratorState::Yielded(f) => {}
            g => {
                break;
            }
        }
        String::new();
    }
}