#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

let mut d = |b| {
    let _c = yield "What is your name?";
    yield "How are you feeling?";
};

while let GeneratorState::Yielded(_f) = d.as_mut().resume(String::new()) {
    // Do nothing
}
