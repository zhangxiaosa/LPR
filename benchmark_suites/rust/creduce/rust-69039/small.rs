#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};
fn a() -> impl Generator<String> {
    |String| {
        let b = yield;
        yield;
    }
}
fn main() {
    let mut c = Box::pin(a());
    loop {
        let mut d = String::new();
        match c.as_mut().resume(d) {
            GeneratorState::Yielded(e) => {}
            f => break,
        }
        d = String::new()
    }
}
