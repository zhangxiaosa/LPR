#![feature(generators, generator_trait)]
use std::ops::Generator;

fn main() {
    let mut d_generator: Box<dyn Generator<(), Yield = &str, Return = ()>> = Box::pin(|_| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });

    let mut c = String::new();
    let e = String::new();
    match d_generator.as_mut().resume(()) {
        _ => {}
    }

    let mut c = String::new();
    let e = String::new();
    match d_generator.as_mut().resume(()) {
        _ => {}
    }
}