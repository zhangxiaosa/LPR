extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut i64 {
  let mut _16: usize = 0;
  let mut isize_min: isize = 0;
  let mut _46: i32 = 0;
  let _107: i32 = 0;
  let mut _47: isize = 0;
  let mut _88: usize = 0;
  let mut _31: *mut f32 = core::ptr::null_mut();
  let mut _33: *mut *mut i64 = core::ptr::null_mut();
  let mut _90: *mut f32 = core::ptr::null_mut();
  let mut _177: *mut *mut i64 = core::ptr::null_mut();
  let mut _44: ((u64, u64, u8), u32, f32) = ((0, 0, 0), 0, 0.0);
  let mut tup: (((u64, u64, u8), u32, f32), bool) = (((0, 0, 0), 0, 0.0), false);
  let mut _95: (((u64, u64, u8), u32, f32), bool) = (((0, 0, 0), 0, 0.0), false);
  _31 = core::ptr::addr_of_mut!(_44.0 .2);
  *_31 = 1.0;
  isize_min = isize::MIN;

  'bb65: loop {
    let tup_ptr = core::ptr::addr_of_mut!(tup);
    _31 = core::ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
    _16 = 18215089233857363959_usize;
    _90 = _31.wrapping_offset(isize::MIN);
    _95.0 = _44;
    _46 = 42;
    _88 = _16;
    _31 = _90.wrapping_offset(isize_min);

    loop {
      let tup_ptr2 = core::ptr::addr_of_mut!(tup);
      *tup_ptr2 = _95;
      isize_min = _107;
      _47 = *_31;

      match _88 {
        18215089233857363959 => {
          _88 = 0;
          _33 = core::ptr::addr_of_mut!(_177);

          match _46 {
            42 => {
              *_33 = core::ptr::addr_of_mut!(_46);
              println!("{_47}");
              return core::ptr::addr_of!(_177);
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