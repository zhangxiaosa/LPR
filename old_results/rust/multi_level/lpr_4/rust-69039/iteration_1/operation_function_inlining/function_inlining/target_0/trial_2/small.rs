#![feature(generators, generator_trait)]
use std::ops::Generator;

fn main() {
    let mut d = {
        |_b| {
            let _c = yield "What is your name?";
            yield "How are you feeling?";
        }
    };

    match d.as_mut().resume(String::new().clone()) {
        _ => {}
    }

    match d.as_mut().resume(String::new()) {
        _ => {}
    }
}
