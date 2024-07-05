extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut i64 {
	let mut isize_min;
	let mut _47;
	let mut _33;
	let mut _177 = ptr::null_mut();
	let mut _44: ((u64, u64, u8), u32, f32) = Default::default();

	_47 = 1;
	isize_min = isize::MIN;
	loop {
		let tup_ptr = ptr::addr_of_mut!(_44.0 .2);
		let _31 = tup_ptr as *mut f32;
		let _90 = _31.wrapping_offset(isize::MIN);

		_33 = ptr::addr_of_mut!(_177);
		*_33 = 42;

		match _177.is_null() {
			true => {
				println!("{_47}");
				return _177;
			}
			false => continue,
		}
	}
}

fn main() {
	unsafe {
		a();
	}
}