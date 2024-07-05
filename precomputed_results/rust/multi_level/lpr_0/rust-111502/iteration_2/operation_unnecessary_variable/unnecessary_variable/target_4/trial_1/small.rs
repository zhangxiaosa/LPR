pub fn c() -> bool {
	let mut a = 0.;
	unsafe { f(&mut a, (&mut a, (0., false))) }
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f32, bool))) -> bool {
	*core::ptr::addr_of!(d.1 .1) = true;
	d;
	d.1 .1
}

fn main() {
	println!("{}", c());
}