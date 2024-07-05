#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = {
        || {
            yield "What is your name?";
            yield "How are you feeling?";
        }
    };
    d.as_mut().resume(String::new());
}