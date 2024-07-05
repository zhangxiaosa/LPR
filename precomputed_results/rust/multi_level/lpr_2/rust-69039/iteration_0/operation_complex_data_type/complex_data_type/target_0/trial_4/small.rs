#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d_state = GeneratorState::Complete;
    let mut d_ready = true;

    loop {
        let mut e = String::new();
        if d_ready {
            match d_state {
                GeneratorState::Complete => break,
                GeneratorState::Yielded(_) => {}
            }
        }

        d_ready = false;

        if d_state == GeneratorState::Complete {
            d_state = GeneratorState::Yielded(String::from("What is your name?"));
        } else {
            d_state = GeneratorState::Yielded(String::from("How are you feeling?"));
        }

        d_ready = true;
    }
}