use std::result::Result;

fn main() {
    let result: Result<(), String> = Err("Some error occurred".to_string());
}
