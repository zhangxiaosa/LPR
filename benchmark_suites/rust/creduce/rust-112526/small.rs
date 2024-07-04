extern crate core;
use core::ptr;
fn dump_var(val0: u16) {
    println!("{val0}")
}
unsafe fn a() -> *const *mut i64 {
    let mut _16;
    let mut _23;
    let mut isize_min;
    let mut _46;
    let _107 = 0;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _81;
    let mut _90;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let _61: ((u64, u64, u8),) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    'bb2: loop {
        let two: u16 = 2;
        _31 = core::ptr::addr_of_mut!(_44.0 .2);
        _23 = 11;
        'b: loop {
            *_31 = 1;
            isize_min = isize::MIN;
            'bb65: loop {
                let tup_ptr = core::ptr::addr_of_mut!(tup);
                _31 = core::ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
                _16 = 18215089233857363959_usize;
                match isize_min {
                    isizeMIN => {
                        _90 = _31.wrapping_offset(isize::MIN);
                        _95.0 = _44;
                        _46 = 42;
                        _81 = core::ptr::addr_of!(_23);
                        _44 = tup.0;
                        _88 = _16;
                        'bb80: loop {
                            _31 = _90.wrapping_offset(isize_min);
                            match *_81 {
                                11 => 'bb88: loop {
                                    let tup_ptr2 = core::ptr::addr_of_mut!(tup);
                                    *tup_ptr2 = _95;
                                    isize_min = _107 as isize;
                                    _47 = two >> *_31;
                                    *tup_ptr = _95;
                                    match _88 {
                                        18215089233857363959 => {
                                            *_31 = _61.0 .2.swap_bytes();
                                            _88 = (*tup_ptr2).0 .2 as usize;
                                            _33 = core::ptr::addr_of_mut!(_177);
                                            match _46 {
                                                42 => {
                                                    *_33 = core::ptr::addr_of_mut!(_46);
                                                    match *_177 {
                                                        42 => {
                                                            dump_var(_47);
                                                            return core::ptr::addr_of!(_177);
                                                        }
                                                        _ => continue 'bb2,
                                                    }
                                                }
                                                c => match *_81 {
                                                    11 => continue 'bb88,
                                                    _ => continue 'bb65,
                                                },
                                            }
                                        }
                                        0 => continue 'bb80,
                                        _ => continue 'bb65,
                                    }
                                },
                                c => continue 'bb65,
                            }
                        }
                    }
                    _ => continue 'b,
                }
            }
        }
    }
}
fn main() {
    unsafe {
        a();
    }
}
