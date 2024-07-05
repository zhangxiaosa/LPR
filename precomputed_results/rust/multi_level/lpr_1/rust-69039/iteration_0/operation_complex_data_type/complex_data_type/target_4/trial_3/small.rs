#![feature(generators, generator_trait)]

use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = Box::pin(|b: &mut DynBool| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });
    loop {
        let mut e = String::new();
        match d.as_mut().resume(&mut e) {
            GeneratorState::Yielded(_) => {
                // Handle the yielded value
            }
            _ => {
                break;
            }
        }
    }
}