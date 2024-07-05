#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    fn gen() -> impl Generator<Yield = &'static str, Return = ()> {
        move |b| {
            let name = yield "What is your name?";
            let feeling = yield "How are you feeling?";
            yield "Done";
        }
    }

    let mut d = Box::pin(gen());

    loop {
        let e = String::new();
        match d.as_mut().resume(e) {
            GeneratorState::Yielded(_) => {}
            _ => break,
        }
        String::new();
    }
}
