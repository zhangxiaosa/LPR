#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    match GeneratorState::Complete {
        _ => (),
    }
}
