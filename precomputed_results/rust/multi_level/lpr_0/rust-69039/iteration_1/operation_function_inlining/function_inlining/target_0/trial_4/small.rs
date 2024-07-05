#![feature(generators, generator_trait)]

use std::ops::Generator;

fn main() {
    let mut d = Box::pin(|_| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });

    let e = String::new();
    let _ = d.as_mut().resume(e);
    let e = String::new();
    let _ = d.as_mut().resume(e);
}
