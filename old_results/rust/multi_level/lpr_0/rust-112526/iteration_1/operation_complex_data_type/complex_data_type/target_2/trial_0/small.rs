fn a() -> *const *mut i64 {
  let mut _16: usize;
  let mut isize_min: isize;
  let mut _46: i64;
  let mut _47: i64;
  let mut _88: usize;
  let mut _31: *mut f32;
  let mut _33: *mut *mut i64;
  let mut _90: *mut f32;
  let mut _177: *mut i64 = std::ptr::null_mut();
  let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
  let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
  let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();

  _16 = 18215089233857363959usize;
  isize_min = isize::MIN;
  // Assign other variables...

  return std::ptr::addr_of!(_177);
}

fn main() {
  unsafe {
    a();
  }
}