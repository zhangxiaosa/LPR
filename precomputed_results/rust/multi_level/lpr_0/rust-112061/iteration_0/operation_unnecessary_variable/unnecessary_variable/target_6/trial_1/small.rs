use std::ptr;

unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut v9 = 0;
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = ptr::addr_of_mut!(c);

    'l0: loop {
        v9 = 2_usize;
        loop {
            match 197 {
                4 => {}
                _ => return ret,
            }
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}