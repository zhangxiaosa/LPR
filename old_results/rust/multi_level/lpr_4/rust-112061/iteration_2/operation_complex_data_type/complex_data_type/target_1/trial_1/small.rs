use std::ptr;

fn main() {

    let mut c = false;
    let mut v8 = 13978819448286864680_u64;
    let mut v9 = 0;
    let mut v20 = [0; 8];
    let mut f = (false, 0);
    let mut v33_arr = [0; 7];
    let mut v33_ptr_i8 = ptr::null_mut();
    let mut v33_ptr_bool = ptr::null_mut();
    let mut v39_0 = 0;
    let mut v39_1 = [0; 7];
    let mut v39_2_0 = [0; 6];
    let mut v39_2_1 = 0;
    let mut v39_2_2 = ptr::null_mut();
    let mut v39_3 = [0; 2];
    let mut ret_arr = [0; 7];
    let mut ret_ptr_i8 = ptr::null_mut();
    let mut ret_ptr_bool = ptr::null_mut();

    let mut ret = (ret_arr, ret_ptr_i8, ret_ptr_bool);

    ret.2 = ptr::addr_of_mut!(c);

    let mut v20_ptr;

    'l0: loop {
        v20_ptr = ptr::addr_of_mut!(v20[v9]);
        v20 = [197_u8; 8];
        v9 = 2_usize;

        loop {
            match *v20_ptr {
                197 => {
                    v33_ptr_bool = ret.2;

                    match v39_0 {
                        0 => 'l2: loop {
                            *v20_ptr = 22;

                            loop {
                                let e = v20;

                                match v8 {
                                    13978819448286864680 => {
                                        v39_2_0 = [2262110980_u32; 6];
                                        v8 = 13152832795211590855_u64;
                                        v39_0 = 6;
                                        let d = v33_ptr_bool;
                                        v33_ptr_bool = ptr::addr_of_mut!(f.0);
                                        f.1 = *v20_ptr;
                                        *d = true;
                                        v20 = e;

                                        match v39_0 {
                                            6 => {
                                                println!("{:?}", f);
                                            }
                                            0 => continue 'l2,
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
                4 => {
                    v20_ptr = ptr::addr_of_mut!(v20[v9]);
                }
                _ => return ret,
            }
        }
    }
}