fn c() -> bool {
	let mut a = (0., true);
	let b = (0., false);
	let i = core::ptr::addr_of!(a.1) as *mut bool;
	let j = true;
	*i = j;
	return a.1;
}

fn main() {
	println!("{}", c());
}