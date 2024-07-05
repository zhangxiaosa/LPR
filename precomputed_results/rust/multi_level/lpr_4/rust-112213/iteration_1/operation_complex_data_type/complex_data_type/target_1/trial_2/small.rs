use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

const AE_INITIAL_VALUE: isize = 0;
const AH_INITIAL_VALUE: isize = -9_223_372_036_854_775_808;

static mut A: DefaultHasher = DefaultHasher::new();

fn b<F: Hash, X: Hash, Y: Hash, G: Hash>(f: F, x: X, y: Y, g: G) {
    unsafe {
        f.hash(&mut A);
        x.hash(&mut A);
        y.hash(&mut A);
        g.hash(&mut A);
    }
}

fn h(z: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let aa = [0];
    let n = ac(z);
    o([13; 2], z, 15609822513776909592, z, z, n);
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], aa);
    return [13; 2];
}

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (AE_INITIAL_VALUE, AE_INITIAL_VALUE, [0], AE_INITIAL_VALUE);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    b(p, p, 0, 0);
    unsafe {
        q.hash(&mut A);
        ae.hash(&mut A);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    let mut t: (
        *const usize,
        (usize, u8),
        (char, i32, (i64,), u64),
        char,
        ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]),
        *const u8,
    ) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    loop {
        af = n;
        let ah = AH_INITIAL_VALUE;
        let ae = AE_INITIAL_VALUE;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        b(0, 0, n, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, ae, ah, 0);
                b(z, [56_isize; 7], n, r);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32));
    unsafe {
        println!("hash: {}", A.finish());
    }
}