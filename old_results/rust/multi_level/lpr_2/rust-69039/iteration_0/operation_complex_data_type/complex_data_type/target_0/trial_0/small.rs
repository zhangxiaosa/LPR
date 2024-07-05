#![feature(generators, generator_trait)]

use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b| {
        let name_prompt = yield "What is your name?";
        let feeling_prompt = yield "How are you feeling?";
    });

    loop {
        let input = String::new();
        match d.as_mut().resume(input) {
            GeneratorState::Yielded(prompt) => {
                if prompt == "What is your name?" {
                    let name_prompt = prompt;
                    // Process the name prompt...
                } else if prompt == "How are you feeling?" {
                    let feeling_prompt = prompt;
                    // Process the feeling prompt...
                }
            }
            _ => break,
        }
        
        // Additional code...
    }
}