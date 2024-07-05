#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b| {
        let c: &str = yield "What is your name?";
        let _: &str = yield "How are you feeling?";
    });
    loop {
        let e = String::new();
        match d.as_mut().resume(e) {
            GeneratorState::Yielded(f) => {}
            g => {
                break;
            }
        }
        String::new();
    }
}