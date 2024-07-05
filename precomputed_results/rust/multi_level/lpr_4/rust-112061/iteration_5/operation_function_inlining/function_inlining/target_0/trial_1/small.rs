use std::ptr;

fn main() {
    let mut v8 = 139_788_194_482_868_646_80_u64;
    let mut v9 = 0;
    let mut v20_decomposed = [197_u8; 8];

    loop {
        let v20_decomposed_ptr = ptr::addr_of_mut!(v20_decomposed[v9]);
        v9 = 2_usize;

        loop {
            if *v20_decomposed_ptr == 197 {
                let v33_2_ptr = ptr::addr_of_mut!(c);

                *v20_decomposed_ptr = 22;

                loop {
                    let e = v20_decomposed;

                    if v8 == 139_788_194_482_868_646_80 {
                        v8 = 131_528_327_952_115_908_55_u64;
                        v39.2 .0 = [2_262_110_980_u32; 6];
                        v39.0 = 6;

                        *ptr::addr_of_mut!(f_0) = true;

                        if v39.0 == 6 {
                            println!("{:?}", *v20_decomposed_ptr);
                        }
                    } else {
                        break;
                    }

                    v20_decomposed = e;
                }
            } else if *v20_decomposed_ptr == 4 {
                v20_decomposed_ptr = ptr::addr_of_mut!(v20_decomposed[v9]);
            } else {
                return (ptr::null_mut(), ptr::null_mut());
            }
        }
    }
}