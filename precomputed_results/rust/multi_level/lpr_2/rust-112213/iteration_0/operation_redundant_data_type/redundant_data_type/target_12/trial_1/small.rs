use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: DefaultHasher = DefaultHasher::new();

fn b<c: Hash, w: Hash, d: Hash, e: Hash>(f: c, x: w, y: d, g: e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

#[derive(Default)]
struct DefaultData;

fn h(z: [DefaultData; 7], i: usize, j: i32, k: u64) -> [DefaultData; 2] {
    let l = 1;
    let aa = [DefaultData; 6];
    let m = [DefaultData; 6];
    let ab = [DefaultData; 2];
    let n = {
        let ad = [DefaultData; 3];
        let mut ae = (DefaultData, DefaultData, ad, DefaultData);
        let q: (u8, u128, [u64; 3], DefaultData, DefaultData) = (0, 0, ad, DefaultData, DefaultData);
        b(z, z, DefaultData, DefaultData);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        ptr::addr_of_mut!(ae.3)
    };

    o(ab, z, i, z, z, j, n);
    b(j, k, DefaultData, DefaultData);
    b([DefaultData; 6], l, DefaultData, DefaultData);
    b(DefaultData, DefaultData, m, aa);
    return ab;
}

fn o(
    z: [DefaultData; 2],
    n: [DefaultData; 7],
    r: usize,
    mut af: [DefaultData; 7],
    p: [DefaultData; 7],
    s: i32,
    ag: *mut usize,
) {
    let mut t: (
        *const usize,
        (usize, u8),
        (char, i32, (DefaultData,), u64),
        char,
        (
            (f64, DefaultData, i8),
            [f32; 1],
            (usize, u8),
            i8,
            (DefaultData, DefaultData),
            [f32; 1],
        ),
        *const u8,
    ) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (DefaultData,), 0),
        'a',
        ((0., DefaultData, 0_i8), [0.], (0, 0), 0, (DefaultData, DefaultData), [0.]),
        ptr::null(),
    );

    let mut u: ((f64, DefaultData, i8),) = Default::default();
    loop {
        af = n;
        let ah = DefaultData;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, DefaultData, 9_i8);
        b(DefaultData, DefaultData, n, DefaultData);
        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b(af, ae, ah, s);
                b(z, p, n, r);
                return;
            }
            v => unsafe {
                *ag = 88_usize;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            [DefaultData; 7],
            15609822513776909592_usize,
            652623562_i32,
            18399139786288871729_u64
        )
    );

    unsafe {
        println!("hash: {}", a.finish());
    }
}