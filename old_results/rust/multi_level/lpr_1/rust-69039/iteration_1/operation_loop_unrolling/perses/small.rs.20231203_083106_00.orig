#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b| {
        let _c = yield "What is your name?";
        yield "How are you feeling?";
    });

    match d.as_mut().resume(String::new()) {
        GeneratorState::Yielded(_f) => {}
        _ => {}
    }
    match d.as_mut().resume(String::new()) {
        GeneratorState::Yielded(_f) => {}
        _ => {}
    }
    // Add more match statements for each additional iteration

    String::new();
}
