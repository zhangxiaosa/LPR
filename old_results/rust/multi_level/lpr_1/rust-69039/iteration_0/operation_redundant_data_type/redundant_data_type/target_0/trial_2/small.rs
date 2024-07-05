fn main() {
    let mut d = Box::pin(|b: &mut ()| {
        let c = yield "What is your name?".to_string();
        yield "How are you feeling?".to_string();
    });
    loop {
        let e = String::new();
        match d.as_mut().resume(&mut ()) {
            Some(_) => {}
            None => {
                break;
            }
        }
        _ = String::new();
    }
}