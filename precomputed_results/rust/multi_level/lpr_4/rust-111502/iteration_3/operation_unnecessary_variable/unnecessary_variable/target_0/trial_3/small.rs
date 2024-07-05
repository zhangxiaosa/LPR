fn c() -> bool {
	let ptr = core::ptr::null_mut();
	let t = (1.0, false);
	unsafe { f((ptr, t)).1 }
}

unsafe fn f(d: (*mut f64, (f64, bool))) -> bool {
	let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
	*i = true;
	d.1 .1
}

fn main() {
	println!("{}", c());
}