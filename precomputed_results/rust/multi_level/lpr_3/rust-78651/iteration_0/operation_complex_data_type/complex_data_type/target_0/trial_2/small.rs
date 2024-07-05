use std::result::Result;

struct a;

impl a {
    fn b() -> Result<(), ()> {
        Err(())
    }
}