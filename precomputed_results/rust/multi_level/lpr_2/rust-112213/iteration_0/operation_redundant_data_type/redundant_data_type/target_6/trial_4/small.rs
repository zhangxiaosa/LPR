#![feature(const_hash)]
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: [u8; 32] = [0; 32];

fn b(c: [u8; 32], w: [u8; 32], d: [u8; 32], e: [u8; 32]) {
    unsafe {
        for i in 0..32 {
            a[i] = (a[i].wrapping_add(c[i])).wrapping_add((a[i].wrapping_shl(1)).wrapping_add(d[i]));
            a[i] = (a[i].wrapping_mul(e[i])).wrapping_add(w[i]);
        }
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [u8; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b(z.to_be_bytes(), z.to_be_bytes(), [0u8; 32], [0u8; 32]);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        ptr::addr_of_mut!(ae.3)
    };

    o(ab, z, i, [0; 7], [0; 7], j, n);
    b(j.to_be_bytes(), k.to_be_bytes(), [0u8; 32], [0u8; 32]);
    b([112; 6], l.to_be_bytes(), [0u8; 32], [4u8; 32]);
    b([0u8; 32], [0u8; 32], m.to_be_bytes(), aa.to_be_bytes());
    return ab;
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut usize) {
    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
    let mut u: ((f64, i64, i8),) = Default::default();
    loop {
        af = n;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b([0u8; 32], [0u8; 32], [0u8; 32], [0u8; 32]);
        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b(af.to_be_bytes(), ae.to_be_bytes(), ah.to_be_bytes(), s.to_be_bytes());
                b(z.to_be_bytes(), p.to_be_bytes(), n.to_be_bytes(), r.to_be_bytes());
                return;
            }
            _ => unsafe { *ag = 88_usize; }
        }
    }
}

fn main() -> [u8; 2] {
    h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64)
}
