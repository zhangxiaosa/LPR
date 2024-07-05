#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    const UNROLL_FACTOR: usize = 2;

    let mut d = Box::pin(|b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });

    for _ in 0..UNROLL_FACTOR {
        let e = String::new();

        let g_state_1 = d.as_mut().resume(e);
        match g_state_1 {
            GeneratorState::Yielded(_) => {}
            _ => {}
        }

        let g_state_2 = d.as_mut().resume(e);
        match g_state_2 {
            GeneratorState::Yielded(_) => {}
            _ => {}
        }

        // Add any additional unrolled iterations as needed

        // String::new();
    }
}