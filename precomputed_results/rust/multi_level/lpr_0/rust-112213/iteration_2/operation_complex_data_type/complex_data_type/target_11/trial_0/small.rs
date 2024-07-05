use std::prelude::v1::*;

static mut a: u64 = 0;

fn b<F, X, Y, G>(f: F, x: X, y: Y, g: G) where F: Hash, X: Hash, Y: Hash, G: Hash
{
    unsafe {
        a = u64::hash(&f) + u64::hash(&x) + u64::hash(&y) + u64::hash(&g);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let n = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b(z, z, 0, 0);
        unsafe {
            a = u64::hash(&q) + u64::hash(&ae);
        }
        &mut ae.3
    };
    o([13, 13], z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], aa);
    return [13, 13];
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, _ag: *mut isize) {
    let mut t: *const usize = ptr::null();
    let (_a, _b) = (0, 0);
    let (_c, _d, (_e,), _f) = ('a', 0, (0,), 0);
    let _g = ((0.0, 0, 0), 0.0, (0, 0), 0, (0, 0), 0.0);
    let _h: *const u8 = ptr::null();
    loop {
        af = n;
        let ae = 0;
        t = &t.1.0;
        _g.0.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        a = u64::hash(&af) + u64::hash(&ae) + u64::hash(&z) + u64::hash(&p);
        match _g.0.2 {
            9 => {
                a = u64::hash(&af) + u64::hash(&ae) + u64::hash(&z) + u64::hash(&p);
                return;
            }
            _v => {
                unsafe {
                    *_ag = 88_isize;
                }
            }
        }
    }
}

fn main() {
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64));
    unsafe {
        println!("hash: {}", a);
    }
}
