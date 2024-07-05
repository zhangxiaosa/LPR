fn a() -> *const *mut i64 {
	let mut _16;
	let mut isize_min;
	let mut _46;
	let mut _47;
	let mut _88;
	let mut _31;
	let mut _33;
	let mut _90;
	let mut _177 = std::ptr::null_mut();
	let mut _44_0: u64 = Default::default();
	let mut _44_1: u64 = Default::default();
	let mut _44_2: u8 = Default::default();
	let mut _44_3: u32 = Default::default();
	let mut _44_4: f32 = Default::default();
	let mut _95_0: u64 = Default::default();
	let mut _95_1: u64 = Default::default();
	let mut _95_2: u8 = Default::default();
	let mut _95_3: u32 = Default::default();
	let mut _95_4: f32 = Default::default();
	let mut _95_5: bool = Default::default();
	_31 = &mut _44_4;
	*_31 = 1;
	isize_min = isize::MIN;
	'bb65: loop {
		let _31 = &mut _95_2;
		_16 = 18215089233857363959_usize;
		_90 = _31.wrapping_offset(isize::MIN);
		_95_0 = _44_0;
		_95_1 = _44_1;
		_95_2 = _44_2;
		_95_3 = _44_3;
		_95_4 = _44_4;
		_95_5 = false;
		_46 = 42;
		_88 = 18215089233857363959_usize;
		_31 = _90.wrapping_offset(isize_min);
		loop {
			let _tup_ptr2 = &mut (_95_0, _95_1, _95_2, _95_3, _95_4, _95_5);
			*_tup_ptr2 = (_95_0, _95_1, _95_2, _95_3, _95_4, _95_5);
			isize_min = 0;
			_47 = *_31;
			match _88 {
				18215089233857363959 => {
					_88 = 0;
					let _33 = &mut _177;
					match _46 {
						42 => {
							*_33 = &mut _46;
							println!("{_47}");
							return &_177;
						}
						_ => continue,
					}
				}
				0 => continue,
				_ => continue 'bb65,
			}
		}
	}
}

fn main() {
	unsafe {
		a();
	}
}