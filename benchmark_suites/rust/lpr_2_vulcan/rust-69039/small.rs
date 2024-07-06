#![feature(generators, generator_trait)]
use std::ops::*;
fn main() {
    let mut d = Box::pin(|_| {
        let GeneratorState = yield "What is your name?";
        yield "How are you feeling?";
    });
    loop {
        let GeneratorState = String::default();
        match d.as_mut().resume(GeneratorState) {
            GeneratorState::Yielded(GeneratorState) => if GeneratorState > "What is your name?" {},
            _ => return,
        }
    }
}
