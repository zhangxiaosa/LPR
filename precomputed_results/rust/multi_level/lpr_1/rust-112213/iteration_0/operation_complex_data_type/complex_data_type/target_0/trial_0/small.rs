#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn b<H: Hash>(f: H, x: H, y: H, g: H, a: &mut DefaultHasher) {
    f.hash(a);
    x.hash(a);
    y.hash(a);
    g.hash(a);
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64, ac_result: *mut isize) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = ac_result;
    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0, unsafe { &mut *(n as *mut DefaultHasher) });
    b([112; 6], l, 0, 4, unsafe { &mut *(n as *mut DefaultHasher) });
    b((), (), m, aa, unsafe { &mut *(n as *mut DefaultHasher) });
    return ab;
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut isize) {
    let mut t = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
    let mut u: ((f64, i64, i8),) = Default::default();
    loop {
        af = n;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n, 0, unsafe { &mut *(ag as *mut DefaultHasher) });
        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b(af, ae, ah, s, unsafe { &mut *(ag as *mut DefaultHasher) });
                b(z, p, n, r, unsafe { &mut *(ag as *mut DefaultHasher) });
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    let ac_result = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        let mut a = DefaultHasher::new();
        b([56_isize; 7], [56_isize; 7], 0, 0, &mut a);
        q.hash(&mut a);
        ae.hash(&mut a);
        ptr::addr_of_mut!(ae.3)
    };
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64, ac_result));
    let a = unsafe { a.finish() };
    println!("hash: {}", a);
}