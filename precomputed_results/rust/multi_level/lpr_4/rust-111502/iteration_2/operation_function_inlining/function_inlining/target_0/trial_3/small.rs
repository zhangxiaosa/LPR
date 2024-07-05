fn c() -> bool {
	let mut a = (0.0, true);
	let d = (*mut (f32, bool), (f64, bool)) = (core::ptr::addr_of_mut!(a), (1.0, false));
	let g = true;
	let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
	*i = g;
	d;
	return d.1 .1;
}

fn main() {
	println!("{}", c());
}