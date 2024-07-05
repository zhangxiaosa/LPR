#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|_: ()| {});

    loop {
        match d.as_mut().resume(()) {
            GeneratorState::Yielded(_) => {}
            _ => {
                break;
            }
        }
    }
}
