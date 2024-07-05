#![feature(generators, generator_trait)]

use std::pin::Pin;
use std::ops::Generator;
use std::ops::GeneratorState;

fn main() {
    let mut d = {
        let mut gen = || {
            let _name = yield "What is your name?";
            yield "How are you feeling?";
        };
        unsafe { Pin::new_unchecked(&mut gen) }
    };
    loop {
        let _e = String::new();
        if let GeneratorState::Complete(_) = d.as_mut().resume(_e) {
            break;
        }
    }
}
