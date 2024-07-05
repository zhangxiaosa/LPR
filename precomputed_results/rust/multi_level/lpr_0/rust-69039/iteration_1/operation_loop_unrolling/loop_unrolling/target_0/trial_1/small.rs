#![feature(generators, generator_trait)]
use std::ops::Generator;

fn main() {
    let mut d = Box::pin(|_| {
        // Iteration 1
        let c = yield "What is your name?";
        yield "How are you feeling?";

        // Iteration 2
        let c = yield "What is your name?";
        yield "How are you feeling?";

        // Add more iterations as needed
    });

    let e = String::new();
    match d.as_mut().resume(e) {
        _ => {}
    }

    String::new();
    let e = String::new();
    match d.as_mut().resume(e) {
        _ => {}
    }
}