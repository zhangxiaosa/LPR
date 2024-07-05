use std::ptr;

fn a() -> &f32 {
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    *ptr::addr_of_mut!(_44.0 .2) = 1.0;
    &(_44.0 .2)
}

fn main() {
    let _ = unsafe {
        a();
    };
}