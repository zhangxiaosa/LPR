#![feature(generators, generator_trait)]

fn main() {
    let mut d = Box::pin(|_| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });
    let mut e = String::new();
    match d.as_mut().resume(e) {
        _ => {}
    }
    let mut f = String::new();
    match d.as_mut().resume(f) {
        _ => {}
    }
}