#![feature(generators, generator_trait)]
use std::ops::Generator;

fn a() -> impl Generator<String> {
    |b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    }
}

fn main() {
    let mut d_generator = Box::pin(a());
    let mut d_resume_result;

    let e = String::new();

    match d_generator.as_mut().resume(e.clone()) {
        _ => {}
    }

    String::new();

    match d_generator.as_mut().resume(e) {
        _ => {}
    }
}
