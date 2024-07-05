#![feature(generators, generator_trait)]

use std::ops::Generator;

struct MyGenerator {
    b: String,
}

impl Generator for MyGenerator {
    type Yield = String;
    type Return = ();

    fn resume(&mut self, _arg: Self::Yield) -> std::ops::GeneratorState<Self::Yield, Self::Return> {
        todo!()
    }
}

fn main() {
    let mut d = MyGenerator { b: String::new() };

    match d.resume(String::new()) {
        _ => {}
    }

    match d.resume(String::new()) {
        _ => {}
    }

    String::new();
}