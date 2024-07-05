#![feature(generators, generator_trait)]

fn main() {
    let mut gen = |b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    };
    loop {
        let e = String::new();
        match gen.resume(e) {
            GeneratorState::Yielded(f) => {}
            g => {
                break;
            }
        }
    }
}