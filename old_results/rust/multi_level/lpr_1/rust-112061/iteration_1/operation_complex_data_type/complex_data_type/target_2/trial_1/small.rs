use std::ptr;

unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut v8 = 13978819448286864680_u64;
    let mut v9 = 0;
    let mut v20_0;
    let mut v20_1;
    let mut v20_2;
    let mut v20_3;
    let mut v20_4;
    let mut v20_5;
    let mut v20_6;
    let mut v20_7;
    let mut d;
    let mut e;
    let mut f_0;
    let mut f_1;
    let mut v33;
    let mut u32_array_0 = [0_u32; 6];
    let mut u32_array_1 = 0;
    let mut u32_array_2 = ptr::null_mut();
    let mut v39_0 = 0;
    let mut v39_1 = [0_u128; 7];
    let mut v39_2 = (u32_array_0, u32_array_1, u32_array_2);
    let mut v39_3 = [0_u32; 2];
    let mut ret = ([0_u128; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = ptr::addr_of_mut!(c);
    'l0: loop {
        v20_0 = ptr::addr_of_mut!(v20_0);
        v20_1 = ptr::addr_of_mut!(v20_1);
        v20_2 = ptr::addr_of_mut!(v20_2);
        v20_3 = ptr::addr_of_mut!(v20_3);
        v20_4 = ptr::addr_of_mut!(v20_4);
        v20_5 = ptr::addr_of_mut!(v20_5);
        v20_6 = ptr::addr_of_mut!(v20_6);
        v20_7 = ptr::addr_of_mut!(v20_7);
        *v20_0 = 197_u8;
        *v20_1 = 197_u8;
        *v20_2 = 197_u8;
        *v20_3 = 197_u8;
        *v20_4 = 197_u8;
        *v20_5 = 197_u8;
        *v20_6 = 197_u8;
        *v20_7 = 197_u8;
        v9 = 2_usize;
        loop {
            match *v20_0 {
                197 => {
                    v33 = ret;
                    match v39_0 {
                        0 => 'l2: loop {
                            *v20_0 = 22_u8;
                            loop {
                                e = (v20_0, v20_1, v20_2, v20_3, v20_4, v20_5, v20_6, v20_7);
                                match v8 {
                                    13978819448286864680 => {
                                        v39_2 .0 = [2262110980_u32; 6];
                                        v8 = 13152832795211590855_u64;
                                        v39_0 = 6;
                                        d = v33.2;
                                        v33.2 = ptr::addr_of_mut!(f_0);
                                        f_1 = *v20_0;
                                        *d = true;
                                        (v20_0, v20_1, v20_2, v20_3, v20_4, v20_5, v20_6, v20_7) = e;
                                        match v39_0 {
                                            6 => {
                                                println!("{:?}", (f_0, f_1));
                                            }
                                            0 => continue 'l2,
                                            _ => return ret,
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        },
                        g => return ret,
                    }
                }
                4 => {
                    v20_0 = ptr::addr_of_mut!(v20_0);
                    v20_1 = ptr::addr_of_mut!(v20_1);
                    v20_2 = ptr::addr_of_mut!(v20_2);
                    v20_3 = ptr::addr_of_mut!(v20_3);
                    v20_4 = ptr::addr_of_mut!(v20_4);
                    v20_5 = ptr::addr_of_mut!(v20_5);
                    v20_6 = ptr::addr_of_mut!(v20_6);
                    v20_7 = ptr::addr_of_mut!(v20_7);
                }
                g => return ret,
            }
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}