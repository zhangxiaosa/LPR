#![feature(generators, generator_trait)]

use std::ops::{Generator, GeneratorState};

fn main() {
    let mut generator = || {
        let is_name_requested = yield "What is your name?";
        yield "How are you feeling?";
    };

    let e1 = String::new();
    match generator.as_mut().resume(e1) {
        _ => {}
    }

    let e2 = String::new();
    match generator.as_mut().resume(e2) {
        GeneratorState::Yielded("What is your name?") => {}
        _ => {}
    }
}
