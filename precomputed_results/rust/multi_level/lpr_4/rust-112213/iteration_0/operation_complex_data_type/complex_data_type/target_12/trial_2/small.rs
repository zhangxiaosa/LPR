use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: u64 = 0;

fn b(mut f: u64, mut x: u64, mut y: u64, mut g: u64) { 
    unsafe {
        let mut hasher = DefaultHasher::new();
        f.hash(&mut hasher);
        x.hash(&mut hasher);
        y.hash(&mut hasher);
        g.hash(&mut hasher);
        a = hasher.finish();
    }
}

fn h(mut z0: isize, mut z1: isize, mut z2: isize, mut z3: isize, mut z4: isize, mut z5: isize, mut z6: isize, mut i: usize, mut j: i32, mut k: u64) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n0 = z0;
    let n1 = z1;
    let n2 = z2;
    let n3 = z3;
    let n4 = z4;
    let n5 = z5;
    let n6 = z6;
    o(z0, z1, n0, n1, n2, n3, n4, n5, n6, i as isize, z0, z1);
    b(j as u64, k as u64, 0, 0);
    b(112_u64, l as u64, 0, 4);
    b(0, 0, m[0], aa[0]);
    return ab;
}

fn ac(mut p0: isize, mut p1: isize, mut p2: isize, mut p3: isize, mut p4: isize, mut p5: isize, mut p6: isize) -> *mut isize {
    let ad = [0; 3];
    let mut ae = (0_isize, 0_isize, ad, 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
    b(p0, p1, p2, p3, p4, p5, p6);
    unsafe {
        let mut hasher = DefaultHasher::new();
        q.hash(&mut hasher);
        ae.hash(&mut hasher);
        a = hasher.finish();
    }
    return &mut ae.3;
}

fn o(mut z0: isize, mut z1: isize, mut n0: isize, mut n1: isize, mut n2: isize, mut n3: isize, mut n4: isize, mut n5: isize, mut n6: isize, mut r: isize, mut af0: isize, mut af1: isize, mut af2: isize, mut af3: isize, mut af4: isize, mut af5: isize, mut af6: isize, mut p0: isize, mut p1: isize, mut p2: isize, mut p3: isize, mut p4: isize, mut p5: isize, mut p6: isize, mut s: isize, mut ag: *mut isize) {
    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    let mut u: ((f64, i64, i8),) = Default::default();

    loop {
        af0 = n0;
        af1 = n1;
        af2 = n2;
        af3 = n3;
        af4 = n4;
        af5 = n5;
        af6 = n6;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1.0);
        t.4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);

        b(0, 0, n0, 0, 0, n2, 0, 0, 0);

        u.0 = t.4.0;
        match u.0.2 {
            9 => {
                b(af0, af1, af2, s);
                b(z0, p0, n0, r);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    let result = h(56, 56, 56, 56, 56, 56, 56, 15609822513776909592, 652623562, 18399139786288871729);
    println!("{:?}", result);
    unsafe {
        println!("hash: {}", a);
    }
}