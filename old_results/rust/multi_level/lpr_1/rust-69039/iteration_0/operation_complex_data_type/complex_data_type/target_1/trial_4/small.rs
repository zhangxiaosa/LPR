#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut c = String::new();
    let mut e = String::new();
    let mut d: Box<dyn Generator<ResumeArg = String, Yield = &str, Return = ()>> = Box::pin(move |b| {
        let mut c = &mut c;
        let mut e = &mut e;

        let c = b.yield "What is your name?";
        let e = b.yield "How are you feeling?";
        std::mem::drop(c);
        std::mem::drop(e);
    });

    loop {
        let mut e = String::new();
        match d.as_mut().resume(e) {
            GeneratorState::Yielded(f) => {}
            _ => break,
        }
        String::new();
    }
}