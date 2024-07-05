#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b| {
        let _c = yield "What is your name?";
        yield "How are you feeling?";
    });

    // Unrolled loop iterations
    match d.as_mut().resume(String::new()) {
        GeneratorState::Yielded(_f) => {}
        _ => {}
    }

    String::new();

    match d.as_mut().resume(String::new()) {
        GeneratorState::Yielded(_f) => {}
        _ => {}
    }

    String::new();
    
    // Add more unrolled iterations if needed
    
    // Final iteration
    match d.as_mut().resume(String::new()) {
        GeneratorState::Yielded(_f) => {}
        _ => {}
    }
}
