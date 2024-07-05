#![feature(generators, generator_trait)]

use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|_| {
        let is_name_requested = yield "What is your name?";
        let is_feeling_requested = yield "How are you feeling?";
    });

    let mut is_name_requested = false;
    let mut is_feeling_requested = false;

    loop {
        let _e = String::new();
        match d.as_mut().resume(_e) {
            GeneratorState::Yielded("What is your name?") => {
                is_name_requested = true;
            }
            GeneratorState::Yielded("How are you feeling?") => {
                is_feeling_requested = true;
            }
            _ => {
                break;
            }
        }
        String::new();
    }
}