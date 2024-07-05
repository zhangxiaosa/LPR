use std::ops::Generator;

fn main() {
    let mut d_generator = Box::pin(|_| {
        let _ = yield "What is your name?";
        yield "How are you feeling?";
    });

    d_generator.as_mut().resume(())
        .map_err(|_| ());
}