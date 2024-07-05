#![feature(generators, generator_trait)]
use std::ops::Generator;

fn a() -> impl Generator<(String, String)> {
    |_b| {
        let _c = yield ("What is your name?", String::new());
        yield ("How are you feeling?", String::new());
    }
}

fn main() {
    let mut _b = String::new();
    let mut _c = String::new();
    
    let mut d = Box::pin(a());
    
    match d.as_mut().resume((_b.clone(), _c.clone())) {
        (updated_b, updated_c) => {
            _b = updated_b;
            _c = updated_c;
        }
    }
    
    match d.as_mut().resume((_b.clone(), _c.clone())) {
        (updated_b, updated_c) => {
            _b = updated_b;
            _c = updated_c;
        }
    }
}
