#![feature(generators, generator_trait)]

use std::ops::Generator;

fn main() {
    let mut d_generator = Box::pin(|_| {
        let _ = yield "What is your name?";
        yield "How are you feeling?";
    });

    let e = String::new();

    if let _ = d_generator.as_mut().resume(e) {}

    String::new();

    let e = String::new();

    if let _ = d_generator.as_mut().resume(e) {}
}
