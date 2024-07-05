fn c() -> bool {
	let mut a_0: f32 = 0.0;
	let mut a_1: bool = true;
	let mut a: (f32, bool) = (a_0, a_1);
	let e: bool = unsafe { f(&mut a, (core::ptr::addr_of_mut!(a), (1.0, false)), true) };
	return e;
}

unsafe fn f(_k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool) -> bool {
	let i: *mut bool = core::ptr::addr_of!(d.1 .1) as *mut bool;
	*i = g;
	d;
	return d.1 .1;
}

fn main() {
	println!("{}", c());
}