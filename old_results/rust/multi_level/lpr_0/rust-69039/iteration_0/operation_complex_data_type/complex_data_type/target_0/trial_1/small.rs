#![feature(generators, generator_trait)]

use std::ops::Generator;

fn main() {
    let mut d: String = String::from("What is your name?");
    let e = String::new();
    match d.as_mut().resume(e) {
        _ => {}
    }
    let e = String::new();
    match d.as_mut().resume(e) {
        _ => {}
    }
}