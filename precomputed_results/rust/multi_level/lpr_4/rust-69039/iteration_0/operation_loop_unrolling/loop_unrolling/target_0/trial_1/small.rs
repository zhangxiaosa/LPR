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

    // Loop Unrolling
    let e1 = String::new();
    match d.as_mut().resume(e1) {
        GeneratorState::Yielded(f) => {}
        _ => break,
    }

    let e2 = String::new();
    match d.as_mut().resume(e2) {
        GeneratorState::Yielded(f) => {}
        _ => break,
    }

    let e3 = String::new();
    match d.as_mut().resume(e3) {
        GeneratorState::Yielded(f) => {}
        _ => break,
    }

    // Repeat the above pattern for a total of 10 unrolls...

    let e10 = String::new();
    match d.as_mut().resume(e10) {
        GeneratorState::Yielded(f) => {}
        _ => break,
    }
}
