#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|_b| {
        // let c = yield "What is your name?";
        // yield "How are you feeling?";
    });

    loop {
        let e = String::new();
        match d.as_mut().resume(e) {
            // GeneratorState::Yielded(f) => {}
            _ => {
                break;
            }
        }
        String::new();
    }
}