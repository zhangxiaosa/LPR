#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let name_prompt_generator = |_: bool| {
        yield "What is your name?";
        "How are you feeling?"
    };

    let mut d = Box::pin(name_prompt_generator);
    
    match d.as_mut().resume(()) {
        _ => (),
    }
    
    match d.as_mut().resume("What is your name?") {
        _ => (),
    }
}
