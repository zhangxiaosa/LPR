fn c() -> bool {
	let mut a_0: f32 = 0.0;
	let b_0: f32 = 0.0;
	let d_0: *mut f32 = &mut a_0;
	let e_0: bool = unsafe { f(d_0, (d_0, (0.0, false)), true, true) };
	return e_0;
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f64, bool)), g: bool, h: bool) -> bool {
	let i_0: *mut bool = &mut (k as *mut (f64, bool)).offset(1).cast::<bool>().read();
	let j_0: bool = true;
	*i_0 = j_0;
	return k.read();
}

fn main() {
	println!("{}", c());
}