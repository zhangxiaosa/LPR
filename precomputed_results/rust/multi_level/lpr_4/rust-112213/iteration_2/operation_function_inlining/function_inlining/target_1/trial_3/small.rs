#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: DefaultHasher = DefaultHasher::new();

fn h(z: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let n = ac(z);
    let f = 652623562_i32;
    let x = 18399139786288871729_u64;
    let y = 0;
    let g = 0;

    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }

    let f = [112; 6];
    let x = 1;
    let y = 0;
    let g = 4;

    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }

    let f = ();
    let x = ();
    let y = [0];
    let g = [0];

    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }

    return [13; 2];
}

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);

    unsafe {
        p.hash(&mut a);
        p.hash(&mut a);
        0.hash(&mut a);
        0.hash(&mut a);
        q.hash(&mut a);
        ae.hash(&mut a);
    }

    return ptr::addr_of_mut!(ae.3);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
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

    loop {
        af = n;
        let ah = -9_223_372_036_854_775_808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);

        let f = 0;
        let x = 0;
        let y = n;
        let g = 0;

        unsafe {
            f.hash(&mut a);
            x.hash(&mut a);
            y.hash(&mut a);
            g.hash(&mut a);
        }

        match t.4 .0 .2 {
            9 => {
                let af = af;
                let ae = ae;
                let ah = ah;
                let z = z;
                let n = [56_isize; 7];
                let r = r;
                b(af, ae, ah, 0);
                b(z, n, r, r);
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
        println!("hash: {}", a.finish());
    }
}