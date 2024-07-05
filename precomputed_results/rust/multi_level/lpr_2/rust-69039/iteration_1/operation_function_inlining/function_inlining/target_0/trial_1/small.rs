#![feature(generators, generator_trait)]

fn main() {
    let mut d = {
        let mut b = yield "What is your name?";
        let name_prompt = "What is your name?";
        if b == name_prompt {
            yield "How are you feeling?";
        }
    };
    loop {
        let input = String::new();
        if let GeneratorState::Yielded(prompt) = d.as_mut().resume(input) {
            if prompt == "What is your name?" {
                // Code block left empty since the condition is no longer needed
            }
        } else {
            break;
        }
    }
}