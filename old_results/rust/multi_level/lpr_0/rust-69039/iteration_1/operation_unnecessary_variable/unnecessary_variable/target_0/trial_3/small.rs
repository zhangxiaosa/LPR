#![feature(generators, generator_trait)]

use std::ops::Generator;

fn main() {
    let mut d_generator = Box::pin(|_| {
        yield "What is your name?";
        yield "How are you feeling?";
    });
    let e = String::new();
    match d_generator.as_mut().resume(e) {
        _ => {}
    }
    String::new();
    let e = String::new();
    match d_generator.as_mut().resume(e) {
        _ => {}
    }
}
