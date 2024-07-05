unsafe fn b() {
    let mut c = false;
    let mut v20: [u8; 8] = [197; 8];
    let mut v9 = 2_usize;
    let mut f: (bool, u8) = Default::default();

    'l0: loop {
        let v12 = &mut v20[0];

        match *v12 {
            197 => {
                *v12 = 22;
                match v39.0 {
                    6 => {
                        println!("{:?}", f);
                    }
                    0 => continue 'l0,
                    _ => break,
                }
            }
            _ => break,
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}