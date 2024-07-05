fn c() -> bool {
	let mut a: f32 = 0.0;
	let d_0: f32 = 0.0;
	let d_1: bool = true;
	let d_2: f64 = 0.0;
	let d_3: bool = false;
	let e = unsafe { f(&mut a, (&mut d_0, d_1, d_2, d_3), true, true) };
	return e;
}

unsafe fn f(k: *mut f32, d: (f32, bool, f64, bool), g: bool, h: bool) -> bool {
	let i: *mut bool = &mut d.3;
	let j: bool = g;
	*i = j;
	return d.3;
}

fn main() {
	println!("{}", c());
}