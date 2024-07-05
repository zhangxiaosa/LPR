#![feature(generators, generator_trait)]

use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(unrolled_loop());
    
    match d.as_mut().resume(String::new()) {
        GeneratorState::Yielded(_) => {}
        GeneratorState::Complete(_) => {}
    }
}

fn unrolled_loop() -> impl Generator<Yield = &'static str, Return = ()> {
    let mut i = 0;
    move |_| {
        i += 1;
        match i {
            1 => yield "What is your name?",
            2 => yield "How are you feeling?",
            3 => yield "What is your name?",
            4 => yield "How are you feeling?",
            _ => return,
        };
    }
}