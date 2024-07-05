fn c() -> bool {
	unsafe { f((core::ptr::null_mut(), (1.0, false)), true) }
}

unsafe fn f(d: (*mut (f64, bool), (f64, bool)), g: bool) -> bool {
	let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
	*i = g;
	return d.1 .1;
}

fn main() {
	println!("{}", c());
}