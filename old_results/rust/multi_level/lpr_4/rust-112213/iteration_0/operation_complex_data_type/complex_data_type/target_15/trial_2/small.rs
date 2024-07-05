fn b(mut f: u64, mut x: u64, mut y: u64, mut g: u64) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(mut z: [i64; 7], mut i: usize, mut j: i32, mut k: u64) -> [i64; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = ac(z);
    o(ab, z, i, z, z, j, n);
    b(j as u64, k as u64, 0, 0);
    b([112; 6] as u64, l as u64, 0, 4);
    b(0u64, 0u64, m as u64, aa as u64);
    return ab;
}

fn ac(mut p: [i64; 7]) -> *mut i64 {
    let ad = [0; 3];
    let mut ae = (0_i64, 0_i64, ad, 0_i64);
    let q: (u8, u128, [u64; 3], i64, i16) = (0, 0, ad, 0, 0);
    b(p as u64, p as u64, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(mut z: [i64; 2], mut n: [i64; 7], mut r: usize, mut af: [i64; 7], mut p: [i64; 7], mut s: i32, mut ag: *mut i64) {
    let mut t: (*const usize, (u64, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (u64, u8), i8, (i64, i64), [f32; 1]), *const i8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
    let mut u: ((f64, i64, i8),) = Default::default();

    loop {
        af = n;
        let ah = -9223372036854775808_i64;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);

        b(0, 0, n as u64, 0);

        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b(af as u64, ae as u64, ah as u64, s as u64);
                b(z as u64, p as u64, n as u64, r);
                return;
            }
            _ => unsafe {
                *ag = 88_i64;
            },
        }
    }
}

fn main() {
    println!("{:?}", h([56_i64; 7], 15609822513776909592, 652623562, 18399139786288871729));
    unsafe {
        let hash_result = a.finish();
        println!("hash: {}", hash_result);
    }
}