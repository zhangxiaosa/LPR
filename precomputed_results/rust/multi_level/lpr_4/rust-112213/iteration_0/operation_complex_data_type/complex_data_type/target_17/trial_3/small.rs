use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b(f: isize, x: isize, y: isize, g: isize) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(mut z: [isize; 7], mut i: usize, mut j: i32, mut k: u64) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = ac(z);
    o(ab, z, i, z, z, j, n);
    b(j as isize, k as isize, 0, 0);
    b(112, l, 0, 4);
    b(0, 0, m[0], aa[0]);
    return ab;
}

fn ac(mut p: [isize; 7]) -> *mut isize {
    let ad = [0; 3];
    let mut ae = (0, 0, ad, 0);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
    b(p[0], p[0], 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(
    mut z: [isize; 2],
    mut n: [isize; 7],
    mut r: usize,
    mut af: [isize; 7],
    mut p: [isize; 7],
    mut s: i32,
    mut ag: *mut isize,
) {
    let mut t: (
        *const usize,
        (usize, u8),
        (char, i32, (i64,), u64),
        char,
        (
            (f64, i64, i8),
            [f32; 1],
            (usize, u8),
            i8,
            (isize, i64),
            [f32; 1],
        ),
        *const u8,
    ) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    let mut u: ((f64, i64, i8),) = Default::default();

    loop {
        af = n;
        let ah = -9223372036854775808;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552, 9_i8);

        b(0, 0, n[0], 0);

        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b(af[0], ae, ah, s as isize);
                b(z[0], p[0], n[0], r);
                return;
            }
            _ => unsafe {
                *ag = 88;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            [56; 7],
            15609822513776909592,
            652623562,
            18399139786288871729
        )
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}