fn c() -> bool {
	let mut a = (0., true);
	let i = core::ptr::addr_of!((1., false).1) as *mut bool;
	*i = true;
	let e = (1., false).1;
	return e;
}

fn main() {
	println!("{}", c());
}