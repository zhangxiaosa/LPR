use std::result;

type Err = result::Result<(), ()>;

struct a {}
impl a {
	fn b() -> Err {}
}