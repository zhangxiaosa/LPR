#![feature(generators, generator_trait)]
use std::ops::Generator;
fn main() {
    let mut d_generator = Box::pin(|_| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });
    match d_generator.as_mut().resume(String::new()) {
        _ => {}
    }
    match d_generator.as_mut().resume(String::new()) {
        _ => {}
    }
}