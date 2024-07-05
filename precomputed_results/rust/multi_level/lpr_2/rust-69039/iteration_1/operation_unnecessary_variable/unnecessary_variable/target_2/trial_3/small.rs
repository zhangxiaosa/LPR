fn main() {
    let mut d = Box::pin(|b| {
        let name_prompt = yield "What is your name?";
        yield "How are you feeling?";
    });

    let _ = d.as_mut().resume(String::new());
}
