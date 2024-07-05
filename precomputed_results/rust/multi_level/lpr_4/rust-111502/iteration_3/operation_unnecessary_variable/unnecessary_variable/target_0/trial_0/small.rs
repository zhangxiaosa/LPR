fn c() -> bool {
	let ptr = core::ptr::null_mut();
	let t = (1.0, false);
	unsafe { let i = core::ptr::addr_of!(t.1) as *mut bool; *i = true; }
	return t.1;
}

fn main() {
	println!("{}", c());
}