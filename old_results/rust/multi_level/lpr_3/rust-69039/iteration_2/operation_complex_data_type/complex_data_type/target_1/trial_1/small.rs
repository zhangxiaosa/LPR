fn main() {
    let mut is_name_requested = false;
    let mut how_are_you_feeling = false;

    let mut generator = || {
        let value = if !is_name_requested {
            is_name_requested = true;
            "What is your name?"
        } else {
            how_are_you_feeling = true;
            "How are you feeling?"
        };
        yield value;
    };

    let mut e1 = String::new();
    let value1 = generator.resume(e1);

    let mut e2 = String::new();
    let value2 = generator.resume(e2);

    match (value1, value2) {
        (GeneratorState::Yielded("What is your name?"), _) => {},
        _ => {}
    }
}