fn b(f: u64, x: u64, y: u64, g: u64) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];

    let n: usize = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b(z[0], z[0], 0, 0);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        &mut ae.3 as *mut isize as usize
    };

    o(ab, z, i, z, z, j, n as *mut isize);
    b(j as u64, k, 0, 0);
    b(112, l as u64, 0, 4);
    b(0, 0, m[0], aa[0]);
    return ab;
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, af: [isize; 7], p: [isize; 7], s: i32, ag: *mut isize) {
    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (std::ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), std::ptr::null());
    let mut u: ((f64, i64, i8),) = std::default::Default::default();
    loop {
        af = n;
        let ah = -9223372036854775808;
        let ae = 0;
        t.0 = std::ptr::addr_of!(t.1 .0);
        t.4 .0 = (std::f64::NAN, 1102345069964335552, 9);
        b(0, 0, n[0], 0);
        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b(af[0], ae, ah, s);
                b(z[0], p[0], n[0], r);
                return;
            }
            v => unsafe {
                *ag = 88;
            },
        }
    }
}

fn main() {
    println!("{:?}", h([56; 7], 15609822513776909592, 652623562, 18399139786288871729));
    unsafe {
        println!("hash: {}", a.finish());
    }
}
