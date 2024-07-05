fn c() -> bool {
	let mut d_tuple_float: f64 = 0.0;
	let mut d_bool: bool = false;
	let mut k_float: *mut f32;
	let mut k_bool: *mut bool;
	let mut d_tuple_float_bool: *mut (f32, bool);

	unsafe {
		let d_float_bool = (&mut (0.0, true), (d_tuple_float, d_bool));
		k_float = core::ptr::addr_of!(d_float_bool.0 .0) as *mut f32;
		k_bool = core::ptr::addr_of!(d_float_bool.0 .1) as *mut bool;
		d_tuple_float_bool = core::ptr::addr_of!(d_float_bool.1) as *mut (f32, bool);
		f(k_float_bool, d_tuple_float_bool);
	}
}

unsafe fn f(
	k_float_bool: *mut (f32, bool),
	d_tuple_float_bool: *mut (f32, bool),
) -> bool {
	let i_bool_ptr = core::ptr::addr_of!((*d_tuple_float_bool).1) as *mut bool;
	*i_bool_ptr = true;
	(*d_tuple_float_bool).1
}

fn main() {
	println!("{}", c());
}