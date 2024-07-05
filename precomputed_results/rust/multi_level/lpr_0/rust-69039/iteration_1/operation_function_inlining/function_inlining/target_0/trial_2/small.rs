#![feature(generators, generator_trait)]
use std::ops::Generator;

fn main() {
    let mut d = Box::pin(|_| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });
    let e = String::new();
    {
        let __generator = d.as_mut();
        let __resume_result = unsafe {
            match std::pin::Pin::get_unchecked_mut(__generator).resume(e) {
                std::ops::GeneratorState::Yielded(__val) => __val,
                _ => unreachable!(),
            }
        };
        drop(__resume_result);
    }
    String::new();
    let e = String::new();
    {
        let __generator = d.as_mut();
        let __resume_result = unsafe {
            match std::pin::Pin::get_unchecked_mut(__generator).resume(e) {
                std::ops::GeneratorState::Yielded(__val) => __val,
                _ => unreachable!(),
            }
        };
        drop(__resume_result);
    }
}