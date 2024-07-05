#![feature(generators, generator_trait)]
use std::ops::Generator;

fn main() {
    let mut d = Box::pin(|_| {
        let c = yield "What is your name?";
    });

    let e = String::new();
    d.as_mut().resume(e);

    let e = String::new();
    d.as_mut().resume(e);
}
