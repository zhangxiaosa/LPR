use std::ops::{Generator, GeneratorState};

fn main() {
    let mut generator_closure = |b| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    };

    let mut d = std::pin::Pin::new(&mut generator_closure) as std::pin::Pin<&mut dyn Generator<Yield = &str, Return = ()>>;

    loop {
        let mut e = String::new();

        match d.as_mut().resume(e) {
            GeneratorState::Yielded(f) => {
                // Handle the yielded value, `f`
                /* Handle the yielded value */
            }
            g => {
                break;
            }
        }
        String::new();
    }
}