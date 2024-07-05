#![feature(generators, generator_trait)]
use std::ops::Generator;
fn main() {
    let mut d = Box::pin(|b| {
        let _c = yield "What is your name?";
        yield "How are you feeling?";
    });
    match d.as_mut().resume(String::new()) {
        _ => {}
    }
    match d.as_mut().resume(String::new()) {
        _ => {}
    }
    String::new();
}
