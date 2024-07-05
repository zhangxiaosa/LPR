fn main() {
    let mut d = |b: &mut bool| {
        let name: String = if *b { "John Doe".to_owned() } else { yield "What is your name?".to_owned() };
        let feeling: String = if *b { "Good".to_owned() } else { yield "How are you feeling?".to_owned() };
        *b = true;
        name;
        feeling;
    };

    let mut b = false;
    loop {
        match d(&mut b) {
            _ => break,
        }
    }
}
