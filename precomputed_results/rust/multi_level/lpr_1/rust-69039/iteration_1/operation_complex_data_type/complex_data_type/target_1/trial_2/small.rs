use std::ops::Generator;

fn main() {
    let mut d = {
        let closure = |b: String| {
            let _c: String = yield "What is your name?";
            yield "How are you feeling?";
        };
        Box::pin(closure)
    };

    match d.as_mut().resume(String::new()) {
        _ => {}
    }

    match d.as_mut().resume(String::new()) {
        _ => {}
    }

    String::new();
}