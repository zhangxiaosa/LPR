#![feature(generators, generator_trait)]
use std::ops::{Generator, GeneratorState};

fn main() {
    let mut d = {
        let mut _name = "";
        {
            let mut _e = String::new();
            match unsafe { Pin::new_unchecked(&mut d) }.resume(_e) {
                GeneratorState::Yielded(val) => {
                    _name = val;
                    let _ = unsafe { Pin::new_unchecked(&mut d) }.resume(_e);
                }
                _ => {}
            }
        }
        {
            let _e = String::new();
            unsafe { Pin::new_unchecked(&mut d) }.resume(_e);
        }
    };
}
