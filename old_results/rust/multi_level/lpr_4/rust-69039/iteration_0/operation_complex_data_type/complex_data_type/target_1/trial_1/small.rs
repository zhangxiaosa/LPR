#![feature(generators, generator_trait)]
use std::ops::Generator;

fn a() -> impl Generator<String> {
    |b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    }
}

fn main() {
    let mut d = Box::pin(a());
    match d.as_mut().resume("".to_string()) {
        _ => {}
    }
}