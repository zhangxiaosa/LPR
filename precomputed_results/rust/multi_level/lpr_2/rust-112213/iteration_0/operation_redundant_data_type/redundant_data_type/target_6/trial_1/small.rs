#![feature(const_hash)]
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: Hasher = DefaultHasher::new();

fn b<c: Hash, w: Hash, d: Hash, e: Hash>(f: c, x: w, y: d, g: e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> (u8, u8) {
    let l = 1;
    let aa = (0, 0, 0, 0, 0, 0);
    let m = (0,);
    let ab = (13, 13);
    let n = {
        let ad = (0, 0, 0);
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, (u64, u64, u64), isize, i16) = (0, 0, ad, 0, 0);
        b::<_, _, [u8; 3], _>(z, z, 0, 0);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        ptr::addr_of_mut!(ae.3)
    };

    o(ab, z, i, z, z, j, n);
    b::<i32, u64, u8, u8>(j, k, 0, 0);
    b::<_, _, _, _>([112; 6], l, 0, 4);
    b::<(), (), [isize; 6], [(u8, u8, u8, u8, u8, u8); 6]>((), (), m, aa);
    return ab;
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    mut af: [isize; 7],
    p: [isize; 7],
    s: i32,
    ag: *mut usize,
) {
    let mut t: (
        *const usize,
        (u8, u8),
        (u8, i32, (i64,), u64),
        u8,
        (
            (f64, i64, u8),
            (f32,),
            (usize, u8),
            u8,
            (isize, u64),
            (f32,),
        ),
        *const usize,
    ) = (
        ptr::null(),
        (0, 0),
        (0, 0, (0,), 0),
        0,
        ((0., 0, 0), (0.,), (0, 0), 0, (0, 0), (0.,)),
        ptr::null(),
    );

    let mut u: ((f64, i64, u8),) = Default::default();
    loop {
        af = n;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_u8);
        b::<_, _, _, _>(0, 0, n, 0);
        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b::<_, _, _, _>(af, ae, ah, s);
                b::<_, _, _, _>(z, p, n, r);
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
            [56_isize; 7],
            15609822513776909592_usize,
            652623562_i32,
            18399139786288871729_u64,
        )
    );

    unsafe {
        println!("hash: {}", a.finish());
    }
}