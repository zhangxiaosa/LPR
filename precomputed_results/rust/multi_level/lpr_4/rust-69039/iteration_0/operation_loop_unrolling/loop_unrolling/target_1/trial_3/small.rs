#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn a() -> impl Generator<String> {
    |b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    }
}

fn main() {
    let mut d = Box::pin(a());

    let e1 = String::new();
    let e2 = String::new();

    let mut complete = false;
    while !complete {
        match d.as_mut().resume(e1.clone()) {
            GeneratorState::Yielded(f) => {}
            _ => complete = true,
        }

        match d.as_mut().resume(e2.clone()) {
            GeneratorState::Yielded(f) => {}
            _ => complete = true,
        }
    }
}