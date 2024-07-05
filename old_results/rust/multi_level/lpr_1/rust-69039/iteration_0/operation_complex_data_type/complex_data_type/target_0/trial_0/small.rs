#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};
use std::io::{self, Write};

fn main() {
    let mut prompt1 = String::new();
    let mut prompt2 = String::new();

    loop {
        print!("What is your name? ");
        io::stdout().flush().unwrap();
        io::stdin().read_line(&mut prompt1).unwrap();
        prompt1 = prompt1.trim().to_string();

        print!("How are you feeling? ");
        io::stdout().flush().unwrap();
        io::stdin().read_line(&mut prompt2).unwrap();
        prompt2 = prompt2.trim().to_string();
    }
}