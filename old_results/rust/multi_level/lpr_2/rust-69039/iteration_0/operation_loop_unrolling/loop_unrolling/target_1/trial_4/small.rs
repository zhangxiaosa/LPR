#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });

    let e1 = String::new();
    let e2 = String::new();

    let result1 = d.as_mut().resume(e1);
    let result2 = d.as_mut().resume(e2);

    match result1 {
        GeneratorState::Yielded(f) => {}
        g => {
            break;
        }
    }

    match result2 {
        GeneratorState::Yielded(f) => {}
        g => {
            break;
        }
    }

    String::new();
}