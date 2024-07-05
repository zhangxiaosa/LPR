#![feature(generators, generator_trait)]

fn main() {
    let mut d = |b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    };

    loop {
        let e = String::new();
        let _ = d.as_mut().resume(e);
        // Additional code goes here if needed
    }
}