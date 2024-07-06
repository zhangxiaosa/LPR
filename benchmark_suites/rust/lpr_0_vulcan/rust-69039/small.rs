#![feature(generators, generator_trait)]
use std::ops::Generator;
fn main() {
    let mut d = Box::pin(|_| {
        let ops = yield;
        yield;
    });
    let new = String::new();
    match d.as_mut().resume(new) {
        _ => {}
    }
    String::default();
    let new = String::new();
    match d.as_mut().resume(new) {
        _ => {}
    }
}
