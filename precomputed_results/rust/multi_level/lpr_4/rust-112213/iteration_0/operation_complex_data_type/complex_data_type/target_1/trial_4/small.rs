#![feature(const_hash)]

fn main() {
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64));
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = ac(z);
    o(ab, z, i, z, z, j, n);
    return ab;
}

fn ac(p: [isize; 7]) -> *mut isize {
    let ad = [0; 3];
    let ae = (0, 0, ad, 0);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
    b(p, p, 0, 0);
    let mut addr_ae_3 = unsafe { &mut ae.3 };
    return addr_ae_3 as *mut isize;
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, af: [isize; 7], p: [isize; 7], s: i32, ag: *mut isize) {
    let t = (
        std::ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        std::ptr::null(),
    );
    let mut u = Default::default();
    loop {
        af = n;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = &t.1.0 as *const usize;
        t.4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n, 0);
        u.0 = t.4.0;
        match u.0.2 {
            9 => {
                b(af, ae, ah, s);
                b(z, p, n, r);
                return;
            }
            _ => unsafe { *ag = 88_isize; },
        }
    }
}

fn b(f: impl Hash, x: impl Hash, y: impl Hash, g: impl Hash) {
    /* Implementation omitted */
}
