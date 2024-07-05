fn c() -> bool {
	let mut a = (0., true);
	let d = (&mut a, (0.0, false));
	let e = unsafe { f(&mut a, d, true, true) };
	e
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
	d;
	true
}

fn main() {
	println!("{}", c());
}