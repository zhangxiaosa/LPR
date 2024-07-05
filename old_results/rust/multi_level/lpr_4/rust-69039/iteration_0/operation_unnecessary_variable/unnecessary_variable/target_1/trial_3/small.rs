#![feature(generators, generator_trait)]
use std::ops::Generator;

fn a() -> impl Generator<String> {
    |_b| {
        let _c = yield "What is your name?";
        yield "How are you feeling?";
    }
}

fn main() {
    Box::pin(a());
}
