use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b(f: i32, x: u64, y: i32, g: i32) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [i64; 7], _: usize, _: i32) -> [i64; 2] {
    let n = ac(z);
    o([13; 2], z, 15609822513776909592, z, z, n);
    b(652623562, 18399139786288871729, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], [0]);
    return [13; 2];
}

fn ac(p: [i64; 7]) -> *mut i64 {
    let mut ae = (0_i64, 0_i64, [0], 0_i64);
    let q: (u8, u128, [u64; 3], i64, i16) = (0, 0, [0; 3], 0, 0);
    b(p, p, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(z: [i64; 2], n: [i64; 7], r: usize, mut af: [i64; 7], _: [i64; 7], ag: *mut i64) {
    let mut t = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
    loop {
        af = n;
        let ah = -9_223_372_036_854_775_808_i64;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1.0);
        t.4.0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        b(0, 0, n, 0);
        match t.4.0.2 {
            9 => {
                b(af, ae, ah, 0);
                b(z, [56_i64; 7], n, r);
                return;
            }
            _ => unsafe {
                *ag = 88_i64;
            },
        }
    }
}

fn main() {
    println!("{:?}", h([56_i64; 7], 15609822513776909592_usize, 652623562));
    unsafe {
        println!("hash: {}", a.finish());
    }
}