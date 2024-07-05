#![feature(generators, generator_trait)]
use std::ops::Generator;

fn main() {
    let mut _ = Box::pin(|_| {
        let _ = yield "What is your name?";
        yield "How are you feeling?";
    });
    let e = String::new();
    match _.as_mut().resume(e) {
        _ => {}
    }
    String::new();
    let e = String::new();
    match _.as_mut().resume(e) {
        _ => {}
    }
}
