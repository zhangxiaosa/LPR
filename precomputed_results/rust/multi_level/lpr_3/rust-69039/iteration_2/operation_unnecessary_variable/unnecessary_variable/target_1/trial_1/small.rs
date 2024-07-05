#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|_| {
        let is_name_requested = yield "What is your name?";
        yield "How are you feeling?";
    });
    let e1 = String::new();
    match d.as_mut().resume(e1) {
        _ => {}
    }
    match d.as_mut().resume(String::new()) {
        GeneratorState::Yielded("What is your name?") => {}
        _ => {}
    }
}