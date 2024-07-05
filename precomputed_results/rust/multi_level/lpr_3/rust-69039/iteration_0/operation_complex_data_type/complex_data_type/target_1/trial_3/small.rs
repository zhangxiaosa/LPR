#![feature(generators, generator_trait)]
              use std::ops::Generator;
              use std::pin::Pin;
              
              fn main() {
                  let mut d = || {
                      let c: &str = yield "What is your name?";
                      yield "How are you feeling?";
                  };
              
                  loop {
                      let e: String = String::new();
                      let mut gen = Pin::new(&mut d);
              
                      match gen.as_mut().resume(e) {
                          Generator::Yielded(_) => {}
                          Generator::Complete(_) => {
                              break;
                          }
                      }
                  }
              }