fn main() {
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();

    let _0 = std::ptr::addr_of_mut!(_44.0 .2);
    *_0 = 1;

    'bb65: loop {
        let tup_ptr = std::ptr::addr_of_mut!(tup);
        let _1 = std::ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        let _2 = 18215089233857363959usize;
        let _3 = _1.wrapping_offset(9223372036854775808isize);
        _95.0 = _44;
        let _4 = 42;
        let _5 = _2;
        let _6 = _3.wrapping_offset(9223372036854775808isize);

        loop {
            let tup_ptr2 = std::ptr::addr_of_mut!(tup);
            *tup_ptr2 = _95;
            let _7 = 0;
            let _8 = _6;

            match _5 {
                18215089233857363959 => {
                    let _9 = std::ptr::addr_of_mut!(_177);
                    match _4 {
                        42 => {
                            *_9 = std::ptr::addr_of_mut!(_4);
                            // Replace the following line with your desired output operation.
                            println!("{}", 0);
                            return std::ptr::addr_of!(_177);
                        }
                        _ => continue,
                    }
                }
                0 => continue,
                _ => continue 'bb65,
            }
        }
    }
}