#![feature(generators, generator_trait)]
use std::ops::Generator;

fn main() {
    let mut d = Box::pin(|d| {
        d.yield_("What is your name?");
        d.yield_("How are you feeling?");
        std::marker::PhantomData
    });

    let e = String::new();
    d.as_mut().resume(e);

    let e = String::new();
    d.as_mut().resume(e);
}
