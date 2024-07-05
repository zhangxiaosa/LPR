#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|resume_context| {
        let _name = match resume_context {
            GeneratorState::Complete(_) => panic!("Generator completed."),
            _ => yield "What is your name?",
        };
        match resume_context {
            GeneratorState::Complete(_) => panic!("Generator completed."),
            _ => yield "How are you feeling?",
        };
    });

    loop {
        if let GeneratorState::Yielded(_) = d.as_mut().resume(()) {
            continue;
        } else {
            break;
        }
    }
}
