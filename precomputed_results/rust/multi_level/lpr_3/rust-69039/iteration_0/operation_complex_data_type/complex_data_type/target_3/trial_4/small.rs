#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut gen: Generator<u8, Yield = &str, Return = ()> = |b| {
        let name: &str = yield "What is your name?";
        let feeling: &str = yield "How are you feeling?";
    };

    let mut d_ptr: Box::Pin<Generator<u8, Yield = &str, Return = ()>> = Box::pin(gen);

    loop {
        let mut e: &mut str = "";
        match d_ptr.as_mut().resume(e) {
            GeneratorState::Yielded(_) => {}
            _ => {}
        }
    }
}