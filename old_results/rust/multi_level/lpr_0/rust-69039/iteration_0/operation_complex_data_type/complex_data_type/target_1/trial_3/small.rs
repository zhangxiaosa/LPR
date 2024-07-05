use std::ops::Generator;

fn main() {
    let mut d = Box::pin(|_| {
        let c = yield "What is your name?";
        yield "How are you feeling?";
    });

    // Optimization target: d

    let e = ();
    match d.as_mut().resume(e) {
        _ => {}
    }

    ();
    let e = ();
    match d.as_mut().resume(e) {
        _ => {}
    }
}