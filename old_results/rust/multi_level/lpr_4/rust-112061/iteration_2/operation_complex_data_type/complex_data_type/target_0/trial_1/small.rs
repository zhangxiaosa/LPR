use std::ptr;

fn main() {
    let mut c = false;
    let mut v8 = 13978819448286864680u64;
    let mut v9 = 0usize;
    let mut v20 = [0u8; 8];
    let mut f = (false, 0);
    let mut v33 = ([0u128; 7], std::ptr::null_mut(), std::ptr::null_mut());
    let mut v39 = (0usize, [0u128; 7], ([0u32; 6], 0usize, std::ptr::null_mut()), [0u32; 2]);
    let mut ret = ([0u128; 7], std::ptr::null_mut(), std::ptr::null_mut());
    ret.2 = std::ptr::addr_of_mut!(c);
    let mut v20_ptr;
    'l0: loop {
        v20_ptr = std::ptr::addr_of_mut!(v20[v9]);
        v20 = [197u8; 8];
        v9 = 2usize;
        loop {
            match *v20_ptr {
                197u8 => {
                    v33.2 = ret.2;
                    match v39.0 {
                        0usize => 'l2: loop {
                            *v20_ptr = 22u8;
                            loop {
                                let e = v20;
                                match v8 {
                                    13978819448286864680u64 => {
                                        v39.2.0 = [2262110980u32; 6];
                                        v8 = 13152832795211590855u64;
                                        v39.0 = 6usize;
                                        let d = v33.2;
                                        v33.2 = std::ptr::addr_of_mut!(f.0);
                                        f.1 = *v20_ptr;
                                        *d = true;
                                        v20 = e;
                                        match v39.0 {
                                            6usize => {
                                                println!("{:?}", f);
                                            }
                                            0usize => continue 'l2,
                                            _ => return ret,
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        },
                        _ => return ret,
                    }
                }
                4u8 => {
                    v20_ptr = std::ptr::addr_of_mut!(v20[v9]);
                }
                _ => return ret,
            }
        }
    }
}