#![feature(const_hash)]
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: u64 = 0;

fn b(f: u64, x: u64, y: u64, g: u64) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let n = ac(z);
    o([13; 2], z, 15609822513776909592, z, z, n);
    b(652623562, 18399139786288871729, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], [0]);
    return [13; 2];
}

fn ac(_: [isize; 7]) -> *mut u64 {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    b(0, 0, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    let mut t: (
        *const u8,
        (u32, u8),
        (u8, i32, (i64,), u64),
        char,
        (
            (f32, i64, i8),
            f32,
            (u32, u8),
            i8,
            (i32, i64),
            f32,
        ),
        *const u8,
    ) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0.0, 0, 0), 0.0, (0, 0), 0, (0, 0), 0.0),
        ptr::null(),
    );
    loop {
        af = n;
        let ah: i64 = -9_223_372_036_854_775_808;
        let ae: u8 = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f32::NAN, 1_102_345_069_964_335_552, 9);
        b(0, 0, 0, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, ae, ah as u64, 0);
                b(z, [56; 7], n, r);
                return;
            }
            _ => unsafe {
                *ag = 88;
            },
        }
    }
}

fn main() {
    println!("{:?}", h([56; 7], 15609822513776909592, 652623562));
    unsafe {
        println!("hash: {}", a);
    }
}