use std::ptr;

unsafe fn a() -> *const usize {
    let mut _44: (u64, u64, u8, u32, f32) = Default::default();
    let mut tup: (u64, u64, u8, u32, f32, bool) = Default::default();

    loop {
        if _44.0 .2 == isize::MIN {
            break;
        }

        *ptr::addr_of_mut!(tup) = (_44, Default::default());

        if _88 == 18215089233857363959 {
            println!("{}", _47);
            break ptr::addr_of!(_177);
        }
    }
}

fn main() -> () {
    unsafe {
        a();
    }
}