extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut isize {
    let mut _46 = 42;
    let mut _88 = 18215089233857363959_usize;
    let mut _31;
    let mut _33;
    let mut _90;
    let _44_0_0 = Default::default();
    let _44_0_1 = Default::default();
    let mut _44_0_2 = Default::default();
    let _44_1 = Default::default();
    let _44_2 = Default::default();
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = ptr::addr_of_mut!(_44_0_2);
    *_31 = 1;
    'bb65_0: loop {
        let tup_ptr = ptr::addr_of_mut!(_tup_0);
        _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        _90 = _31.wrapping_offset(isize::MIN);
        _95.0 = ((_44_0_0, _44_0_1, _44_0_2), _44_1, _44_2);
        _31 = _90.wrapping_offset(isize::MIN);
        loop {
            let tup_ptr2 = ptr::addr_of_mut!(_tup_0);
            *tup_ptr2 = _95;
            _46 = 42; // _46 is always 42, so we can remove the match statement
            _33 = ptr::addr_of_mut!(_46);
            println!("{*31}"); // Replace {_47} with {*_31}
            return ptr::addr_of!(_33);
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}