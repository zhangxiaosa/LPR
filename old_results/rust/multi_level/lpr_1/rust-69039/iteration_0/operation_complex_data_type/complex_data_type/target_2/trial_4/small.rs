#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b| {
        let c: String = yield "What is your name?";
        let _ = yield "How are you feeling?";
    });

    loop {
        let mut e = String::new();
        match d.as_mut().resume(e) {
            GeneratorState::Yielded(f) => {
                e = f;
            }
            _ => {
                break;
            }
        }
    }
}