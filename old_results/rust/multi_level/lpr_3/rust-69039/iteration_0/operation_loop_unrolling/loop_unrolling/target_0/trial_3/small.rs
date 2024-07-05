#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });

    // Unrolled loop body
    let e1 = String::new();
    match d.as_mut().resume(e1) {
        GeneratorState::Yielded(f) => {}
        g => {
            break;
        }
    }
    let e2 = String::new();
    match d.as_mut().resume(e2) {
        GeneratorState::Yielded(f) => {}
        g => {
            break;
        }
    }
    let e3 = String::new();
    match d.as_mut().resume(e3) {
        GeneratorState::Yielded(f) => {}
        g => {
            break;
        }
    }
}
