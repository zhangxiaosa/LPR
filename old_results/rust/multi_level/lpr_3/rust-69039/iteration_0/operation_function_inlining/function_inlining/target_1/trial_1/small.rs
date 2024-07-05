#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });

    loop {
        let e = String::new();
        if let GeneratorState::Complete(_) = d.as_mut().resume(e) {
            break;
        }
    }
}
