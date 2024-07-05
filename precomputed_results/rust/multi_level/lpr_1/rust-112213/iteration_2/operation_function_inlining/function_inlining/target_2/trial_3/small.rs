use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<F: Hash, X: Hash, Y: Hash, G: Hash>(f: F, x: X, y: Y, g: G) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64, ac_result: *mut isize) -> [isize; 2] {
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = ac_result;
    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
    let mut af = z;
    let ae = 0;
    t.0 = ptr::addr_of!(t.1 .0);
    t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
    unsafe {
        z.hash(&mut a);
        b(0, 0, z, 0);
    }
    match t.4 .0 .2 {
        9 => {
            unsafe {
                j.hash(&mut a);
                b(z, z, n, i);
            }
            return ab;
        }
        _ => unsafe {
            *ac_result = 88_isize;
        },
    }
}

fn main() {
    let ac_result;
    {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        unsafe {
            b([56_isize; 7], [56_isize; 7], 0, 0);
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        ac_result = ptr::addr_of_mut!(ae.3);
    }
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64, ac_result));
    unsafe {
        println!("hash: {}", a.finish());
    }
}
