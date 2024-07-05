#![feature(generators, generator_trait)]
use std::ops::Generator;
use std::pin::Pin;

fn a() -> impl Generator<String> {
    |_b| {
        let _c = yield "What is your name?";
        yield "How are you feeling?";
    }
}

fn main() {
    let mut d: Pin<Box<impl Generator<String>>> = Box::pin(a());

    let resume_value = String::new().clone();
    match Pin::as_mut(&mut d).resume(resume_value) {
        _ => {}
    }

    let resume_value = String::new();
    match Pin::as_mut(&mut d).resume(resume_value) {
        _ => {}
    }
}