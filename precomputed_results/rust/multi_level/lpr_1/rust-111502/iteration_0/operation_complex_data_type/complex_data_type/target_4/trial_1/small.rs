fn c() -> bool {
	let mut a_0: f32 = 0.0;
	let mut a_1: bool = true;
	let mut k1: *mut (f32, bool) = core::ptr::addr_of_mut!(a_0, a_1);
	let mut k2: f32 = 0.0;
	let k3: bool = false;

	let mut d_0: *mut (f32, bool) = k1;
	let mut d_1_0: f32 = k2;
	let mut d_1_1: bool = k3;
	let d = (d_0, (d_1_0, d_1_1));

	let e = unsafe { f(d_0, d, true, true) };
	return e;
}

unsafe fn f(k_0: *mut (f32, bool), d_0: (*mut (f32, bool), (f32, bool)), g: bool, h: bool) -> bool {
	let mut i: *mut bool = core::ptr::addr_of!(d_0.1 .1);
	let mut j: bool = g;
	*i = j;
	d;
	return d_0.1 .1;
}

fn main() {
	println!("{}", c());
}