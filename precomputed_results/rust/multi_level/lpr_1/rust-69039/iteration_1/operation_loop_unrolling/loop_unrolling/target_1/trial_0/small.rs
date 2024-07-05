#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b| {
        let _c = yield "What is your name?";
        yield "How are you feeling?";
    });

    let iterations = 2; // Set the number of loop iterations to unroll

    for _ in 0..iterations {
        match d.as_mut().resume(String::new()) {
            GeneratorState::Yielded(_f) => {
                // Handle the `GeneratorState::Yielded` case if needed
                // Additional code for each iteration can be inserted here
            }
            _ => {}
        }
    }
    // Add more match statements for each additional iteration

    String::new();
}
