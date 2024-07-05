fn c() -> f64 {
	let mut ptr = 0.0 as *mut f64;
	let tuple_inner = (0.0, 0.0);
	let decomposed_d = (ptr, tuple_inner);
	unsafe { f(decomposed_d) }
}

unsafe fn f(d: (*mut f64, (f64, f64))) -> f64 {
	let i = core::ptr::addr_of!((*d).1 .1) as *mut f64;
	*i = 1.0;
	return (*d).1 .1;
}

fn main() {
	println!("{}", c());
}