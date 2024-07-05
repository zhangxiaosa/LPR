#![feature(generators, generator_trait)]
use std::ops::Generator;
fn a() -> impl Generator<String> {
  |_b| {
      let _c = yield "What is your name?";
      yield "How are you feeling?";
  }
}
fn main() {
  match Box::pin(a()).as_mut().resume(String::new().clone()) {
      _ => {}
  }
  match Box::pin(a()).as_mut().resume(String::new()) {
      _ => {}
  }
}