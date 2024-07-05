#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};
fn main() {
    let mut prompt1 = Box::pin(|b| {
        let _ = yield "What is your name?";
    });
    let mut prompt2 = Box::pin(|b| {
        let _ = yield "How are you feeling?";
    });
    loop {
        let e = String::new();
        match prompt1.as_mut().resume(e) {
            GeneratorState::Yielded(_) => {}
            _ => {
                break;
            }
        }
        match prompt2.as_mut().resume(e) {
            GeneratorState::Yielded(_) => {}
            _ => {
                break;
            }
        }
        String::new();
    }
}