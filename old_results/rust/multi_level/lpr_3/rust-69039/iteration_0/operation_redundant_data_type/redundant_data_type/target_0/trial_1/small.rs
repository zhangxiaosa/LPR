use std::ops::{Generator, GeneratorState};
fn main() {
    let mut d = |b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    };
    loop {
        let e = String::new();
        match d(b) {
            GeneratorState::Yielded(f) => {}
            g => {
                break;
            }
        }
    }
}