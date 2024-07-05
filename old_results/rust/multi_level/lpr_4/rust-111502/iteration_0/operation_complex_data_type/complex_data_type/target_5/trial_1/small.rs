fn c() -> bool {
	let mut a = (0., true);
	let b = (1., false);
	let d = (core::ptr::addr_of_mut!(a), b);
	let e = unsafe { f(&mut a, b, true, true) };
	return e;
}

unsafe fn f(k: *mut (f32, bool), d: (f32, bool), g: bool, h: bool) -> bool {
	let i = &mut (*d.1).1;
	let j = g;
	*i = j;
	d;
	return (*d.1).1;
}

fn main() {
	println!("{}", c());
}