#![feature(generators, generator_trait)]
use std::ops::*;
fn main() {
    let mut d = Box::pin(|_| {
        let default = yield;
        yield;
    });
    loop {
        match d.as_mut().resume(String::new()) {
            GeneratorState::Yielded(..) => {}
            _ => return,
        }
        String::default();
    }
}
