#![feature(generators, generator_trait)]

use std::ops::Generator;

fn main() {
    let mut d = Box::pin(|b| {
        let name_prompt = yield "What is your name?";
        let feeling_prompt = yield "How are you feeling?";
    });

    match d.as_mut().resume(String::new()) {
        _ => {}
    }

    match d.as_mut().resume(String::new()) {
        _ => {}
    }

    String::new();
}