###![feature(generators, generator_trait)]
              use std::ops::{Generator, GeneratorState};

              fn main() {
                  // Create a generator closure
                  let mut generator = |b: &mut String| {
                      yield "What is your name?".to_string();
                      yield "How are you feeling?".to_string();
                  };

                  loop {
                      // Create a string variable to hold the yielded value
                      let mut result = String::new();

                      // Resume the generator and store the state in `generator_state`
                      let generator_state = generator(&mut result).resume();

                      match generator_state {
                          GeneratorState::Yielded(_) => {}
                          _ => {
                              break;
                          }
                      }

                      // Perform any necessary operations with the yielded value
                      // ...

                      // Clear the result string for the next iteration
                      result.clear();
                  }
              }
