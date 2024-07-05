#![feature(generators, generator_trait)]

use std::ops::Generator;

fn main() {
    let mut d_generator = |_: ()| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    };

    let mut d = Box::pin(d_generator);

    let e1 = String::new();
    match d.as_mut().resume(e1) {
        _ => {}
    }

    let e2 = String::new();
    match d.as_mut().resume(e2) {
        _ => {}
    }
}