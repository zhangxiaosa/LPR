extern crate core;

let mut isize_min: isize;
let mut _46: i64;
let mut _47: i64;
let mut _88: usize;
let mut _31: *mut u8;
let mut _33: *mut *mut i64;
let mut _90: *mut u8;
let mut result: *mut i64 = ptr::null_mut();
let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
_46 = 42;
_88 = 18215089233857363959_usize;
_47 = *_31;
tup = _95;
result = &_46;
println!("{_47}");
return &result;

fn main() {
    unsafe {
        a();
    }
}