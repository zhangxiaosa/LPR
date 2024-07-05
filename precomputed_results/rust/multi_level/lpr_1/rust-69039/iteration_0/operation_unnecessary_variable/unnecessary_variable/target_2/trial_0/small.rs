#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b| {
        let _c = yield "What is your name?";
        yield "How are you feeling?";
    });
    loop {
        if let GeneratorState::Yielded(_) = d.as_mut().resume(String::new()) {
            // Do nothing
        } else {
            break;
        }
    }
}