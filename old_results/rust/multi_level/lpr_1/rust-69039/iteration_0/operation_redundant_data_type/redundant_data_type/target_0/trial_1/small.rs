#![feature(generators, generator_trait)]
use std::ops::{GeneratorState};
fn main() {
    let mut d = Box::pin(|b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });
    loop {
        let e = String::new();
        match d.as_mut().resume(e) {
            impl GeneratorState::Yielded(f) => {}
            g => {
                break;
            }
        }
        String::new();
    }
}