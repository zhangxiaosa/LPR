#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};
fn main() {
    let mut d = Box::pin(|_| {
        let _name = yield "What is your name?";
        yield "How are you feeling?";
    });

    let _e = String::new();
    match d.as_mut().resume(_e) {
        GeneratorState::Yielded(_) => {}
        _ => {}
    }
    let _e = String::new();
    match d.as_mut().resume(_e) {
        GeneratorState::Yielded(_) => {}
        _ => {}
    }
}