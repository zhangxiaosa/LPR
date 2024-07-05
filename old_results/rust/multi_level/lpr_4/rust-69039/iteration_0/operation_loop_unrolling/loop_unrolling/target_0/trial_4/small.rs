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

    // Unrolled loop
    let e = String::new();
    match d.as_mut().resume(e) {
        GeneratorState::Yielded(_) => {}
        GeneratorState::Complete(_) => {
            let e = String::new();
            match d.as_mut().resume(e) {
                GeneratorState::Yielded(_) => {}
                GeneratorState::Complete(_) => break,
            }
        }
    }
}