fn a() -> u64 {
    let mut _44: ((u64, u64, u8), u32, u64) = Default::default();
    let mut tup: (((u64, u64, u8), u32, u64), u8) = Default::default();
    *ptr::addr_of_mut!(tup.0 .0 .2) = 1;

    loop {
        *ptr::addr_of_mut!(tup) = (_44, Default::default());

        match 18215089233857363959_u64 {
            18215089233857363959 => {
                *ptr::addr_of_mut!(_177) = ptr::addr_of_mut!(42);
                println!("{_47}");
                return _177 as u64;
            }
            0 => {}
            _ => continue,
        }
    }
}

fn main() {
    a();
}