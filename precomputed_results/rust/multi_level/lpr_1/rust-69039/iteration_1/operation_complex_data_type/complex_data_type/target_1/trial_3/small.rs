#![feature(generators, generator_trait)]

use std::ops::Generator;

fn main() {
    let mut d: Generator<Yield = &str, Return = ()> = || {
        let _: &str = yield "What is your name?";
        yield "How are you feeling?";
    };

    match d.as_mut().resume("") {
        _ => {}
    }

    match d.as_mut().resume("") {
        _ => {}
    }

    String::new();
}
