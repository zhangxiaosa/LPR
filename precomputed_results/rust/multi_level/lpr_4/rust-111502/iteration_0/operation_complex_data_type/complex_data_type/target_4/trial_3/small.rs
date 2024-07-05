fn c() -> bool {
	let mut a0 = 0.0;
	let mut a1 = true;
	let mut a = (&mut a0 as *mut f32, &mut a1 as *mut bool);
	let mut b0 = 1.0;
	let mut b1 = false;
	let b = (&mut b0 as *mut f32, &mut b1 as *mut bool);
	let mut d0 = &mut a as *mut (*mut f32, *mut bool);
	let mut d1 = &mut b as *mut ((*mut f32, *mut bool), (f64, bool));
	let d = (&mut d0 as *mut *mut (*mut f32, *mut bool), &mut d1 as *mut ((*mut f32, *mut bool), (f64, bool)));
	let e = unsafe { f(&mut *d0, *d1, true, true) };
	return e;
}

unsafe fn f(k0: *mut f32, k1: *mut bool, d0: *mut (*mut f32, *mut bool), d1: (*mut f64, *mut bool), g: bool, h: bool) -> bool {
	let i = &mut *d1.1 as *mut bool;
	let j = g;
	*i = j;
	return *d1.1;
}

fn main() {
	println!("{}", c());
}