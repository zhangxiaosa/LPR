fn c() -> bool {
	let ptr: *mut f64 = core::ptr::null_mut();
	let val: f64 = 1.0;
	let flag: bool = false;
	unsafe {
		f((ptr, (val, flag)))
	}
}

unsafe fn f(d: (*mut f64, (f64, bool))) -> bool {
	let i = core::ptr::addr_of_mut!(d.1 .1) as *mut bool;
	*i = true;
	d.1 .1
}

fn main() {
	println!("{}", c());
}