#![feature(generators, generator_trait)]

use std::ops::Generator;

fn main() {
    let mut d = Box::pin(|b: String| {
        let _c: String = yield "What is your name?";
        yield "How are you feeling?";
    });

    let mut generator = *d;

    match generator.as_mut().resume(String::new()) {
        _ => {}
    }

    match generator.as_mut().resume(String::new()) {
        _ => {}
    }

    let _result = String::new();
}
