//![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    match GeneratorState::Yielded(prompt) {
        _ => (),
    }

    match GeneratorState::Yielded(prompt) => if prompt == "What is your name?" {},
    _ => (),
}
