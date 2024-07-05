use std::result;

struct a;

type Result<T> = result::Result<T, ()>;

impl a {
    fn b() -> Result<()> {}
}