#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|| {
        let is_name_requested: &str = yield "What is your name?";
        yield "How are you feeling?";
    });

    let e1: String = String::new();
    match d.as_mut().resume(e1.as_str()) {
        _ => {}
    }

    let e2: String = String::new();
    match d.as_mut().resume(e2.as_str()) {
        GeneratorState::Yielded("What is your name?") => {}
        _ => {}
    }
}