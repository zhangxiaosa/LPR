#![feature(generators, generator_trait)]

fn main() {
    let mut d = Box::pin(|_| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });

    // Optimization target: e

    let e = String::new();
    match d.as_mut().resume(e) {
        _ => {}
    }

    String::new();
    let e = String::new();
    match d.as_mut().resume(e) {
        _ => {}
    }
}