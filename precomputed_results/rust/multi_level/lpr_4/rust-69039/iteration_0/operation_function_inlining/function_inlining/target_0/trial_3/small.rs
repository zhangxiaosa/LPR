fn main() {
    let mut d = Box::pin(|_| {
        "How are you feeling?";
    });

    while let GeneratorState::Yielded(_) = d.as_mut().resume(String::new()) {}
}