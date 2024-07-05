#![feature(generators, generator_trait)]

fn a() -> impl std::ops::Generator<()>
{
    |b| {
        let c: std::pin::Pin<Box<dyn std::ops::Generator<()>>> =
            std::pin::Pin::new(Box::new(move || {
                let _ = yield "What is your name?";
                yield "How are you feeling?";
            }));
        c
    }
}

fn main()
{
    let mut d = Box::pin(a());
    let e = String::new();
    match d.as_mut().resume(()) {
        _ => {}
    }
    String::new();
    match d.as_mut().resume(()) {
        _ => {}
    }
}