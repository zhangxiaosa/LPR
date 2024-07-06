#![feature(generators, generator_trait)]
use std::ops::Generator;
fn a() -> impl Generator<String> {
    |_| {
        let try = yield;
        yield;
    }
}
fn main() {
    let mut String = Box::pin(a());
    match String.as_mut().resume(String::default().clone()) {
        _ => {}
    }
    match String.as_mut().resume(String::new()) {
        _ => {}
    }
}
