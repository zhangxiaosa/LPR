use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: DefaultHasher = DefaultHasher::new();

fn b(f: c, x: w, y: d, g: e) {
    unsafe {
        f.hash(&mut a as &mut DefaultHasher);
        x.hash(&mut a as &mut DefaultHasher);
        y.hash(&mut a as &mut DefaultHasher);
        g.hash(&mut a as &mut DefaultHasher);
    }
}

fn h(z: isize, i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6usize];
    let m = [0; 6usize];
    let ab = [13isize; 2];
    let n = {
        let ad = [0; 3usize];
        let mut ae = (0usize, 0usize, ad, 0usize);
        let q: (u8, u128, [u64; 3usize], isize, i16) = (0, 0, ad, 0, 0);
        b(z, z, 0isize, 0isize);
        unsafe {
            q.hash(&mut a as &mut DefaultHasher);
            ae.hash(&mut a as &mut DefaultHasher);
        }
        ptr::addr_of_mut!(ae.3)
    };

    o(ab, z, i, z, z, j, n);
    b(j, k, 0isize, 0isize);
    b([112; 6usize], l, 0isize, 4isize);
    b((), (), m, aa);
    return ab.to_owned();
}

fn o(z: isize, n: isize, r: usize, mut af: isize, p: isize, s: i32, ag: *mut usize) {
    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1usize], (usize, u8), i8, (isize, i64), [f32; 1usize]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());

    let mut u: ((f64, i64, i8), usize, u8) = Default::default();
    loop {
        af = n;
        let ah = -9223372036854775808isize;
        let ae = 0usize;
        t.0 = ptr::addr_of!(t.1.0);
        t.4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n, 0isize);
        u.0 = t.4.0;
        match u.0.2 {
            9 => {
                b(af, ae, ah, s as isize);
                b(z, p, n, r as isize);
                return;
            }
            v => unsafe {
                *ag = 88usize;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            56isize,
            15609822513776909592usize,
            652623562i32,
            18399139786288871729usize
        )
    );

    unsafe {
        println!("hash: {{PROGRAM_CODE}}");
    }
}