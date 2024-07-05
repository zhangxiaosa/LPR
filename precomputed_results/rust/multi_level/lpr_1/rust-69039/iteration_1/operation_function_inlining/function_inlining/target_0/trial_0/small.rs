#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let _c = yield "What is your name?";
    yield "How are you feeling?";
    String::new();
    String::new();
}
