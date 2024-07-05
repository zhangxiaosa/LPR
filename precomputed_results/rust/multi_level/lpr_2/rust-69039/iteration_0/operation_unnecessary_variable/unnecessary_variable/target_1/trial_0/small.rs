#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};
fn main() {
    let mut d = Box::pin(|b| {
        yield "How are you feeling?";
    });
    loop {
        let input = String::new();
        match d.as_mut().resume(input) {
            GeneratorState::Yielded(_) => {},
            _ => break,
        }
    }
}