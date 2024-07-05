use std::ptr;

unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut v8 = 13978819448286864680_u64;
    let mut v9 = 0;
    let mut v20: [u8; 8] = [197_u8; 8];
    let mut f: (bool, u8) = Default::default();
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) = (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = ptr::addr_of_mut!(c);

    v20[2] = 22;
    v39.2.0 = [2262110980_u32; 6];

    println!("{:?}", f);

    ret
}

fn main() {
    unsafe {
        b();
    }
}