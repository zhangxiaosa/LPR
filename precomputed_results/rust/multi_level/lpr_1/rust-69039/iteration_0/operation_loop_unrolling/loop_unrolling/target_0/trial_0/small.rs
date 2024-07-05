#![feature(generators, generator_trait)]

use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b| {
        let c1 = yield "What is your name?";
        yield "How are you feeling?";
        let c2 = yield "What is your name?";
        yield "How are you feeling?";
    });
    
    let mut e = String::new();
    match d.as_mut().resume(e) {
        GeneratorState::Yielded(_) => {}
        _ => break,
    }
    
    let mut e = String::new();
    match d.as_mut().resume(e) {
        GeneratorState::Yielded(_) => {}
        _ => break,
    }
}