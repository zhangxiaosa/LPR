fn c() -> bool {
	let mut a = (0., true);
	let mut d_ptr = &mut a as *mut (f32, bool);
	let d_val = (0.0, false);
	let e = unsafe { f(d_ptr, (d_ptr, d_val), true, true) };
	return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
	let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
	let j = g;
	*i = j;
	return d.1 .1;
}

fn main() {
	println!("{}", c());
}