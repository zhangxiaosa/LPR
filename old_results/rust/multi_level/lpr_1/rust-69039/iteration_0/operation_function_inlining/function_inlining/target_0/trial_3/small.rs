#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = {
        let mut b = ();
        let mut a = |b| {
            let c = yield "What is your name?";
            yield "How are you feeling?";
        };
        Box::pin(move || {
            let c = yield "What is your name?";
            yield "How are you feeling?";
        })
    };

    loop {
        let e = String::new();
        match d.as_mut().resume(()) {
            GeneratorState::Yielded(f) => {}
            _ => {
                break;
            }
        }
    }
}