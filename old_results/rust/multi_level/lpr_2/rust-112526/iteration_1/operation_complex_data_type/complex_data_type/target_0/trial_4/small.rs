extern crate core;

fn a() -> *mut i64 {
	let mut _16: i64 = 18215089233857363959;
	let mut isize_min: isize = isize::MIN;
	let mut _46: i64 = 42;
	let mut _47: isize = 0;
	let mut _31: *mut isize;
	let mut _90: *mut isize;
	let _177: *mut i64 = core::ptr::null_mut();
	let mut _44_0_2: u8 = 1;
	let mut _44_0: (u64, u64, u8) = (0, 0, _44_0_2);
	let mut _44: ((u64, u64, u8), u32, f32) = (_44_0, 0, 0.0);
	let mut tup_0_0_2: u8 = 0;
	let mut tup_0_0: (u64, u64, u8) = (0, 0, tup_0_0_2);
	let mut tup_0: ((u64, u64, u8), u32, f32) = (tup_0_0, 0, 0.0);
	let mut tup: (((u64, u64, u8), u32, f32), bool) = (tup_0, false);
	_31 = &mut _44.0 .2;
	*_31 = 1;
	_31 = _44.0 .2 as *mut isize;
	_90 = _31.wrapping_offset(isize_min);
	_31 = _90.wrapping_offset(isize_min);
	loop {
		let tup_ptr2 = &mut tup;
		*tup_ptr2 = _44;
		isize_min = 0;
		_47 = *_31;
		match _16 {
			18215089233857363959 => {
				_16 = 0;
				_31 = &mut _46;
				match _46 {
					42 => {
						println!("{_47}");
						return _177;
					}
					_ => continue,
				}
			}
			0 => continue,
			_ => continue,
		}
	}
}

fn main() {
	unsafe {
		a();
	}
}