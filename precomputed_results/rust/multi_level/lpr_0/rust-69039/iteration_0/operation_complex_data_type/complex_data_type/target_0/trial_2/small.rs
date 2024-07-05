#![feature(generators, generator_trait)]
use std::ops::Generator;
fn main() {
    let mut d_closure = Box::pin(|_| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });
    let mut d_generator = d_closure.as_mut();
    let e = String::new();
    let d_resumed1 = d_generator.resume(e);
    String::new();
    let e = String::new();
    let d_resumed2 = d_generator.resume(e);
}