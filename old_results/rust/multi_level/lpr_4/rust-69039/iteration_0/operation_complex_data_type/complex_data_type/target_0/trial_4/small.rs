#![feature(generators, generator_trait)]
use std::ops::Generator;
fn a() -> impl Generator<String> {
    |b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    }
}
fn main() {
    let mut d: Box::Pin<Box<dyn Generator<String, Yield = String>>> = Box::pin(a());
    let e: String = String::new();
    match d.as_mut().resume(e.clone()) {
        _ => {}
    }
    String::new();
    match d.as_mut().resume(e) {
        _ => {}
    }
}