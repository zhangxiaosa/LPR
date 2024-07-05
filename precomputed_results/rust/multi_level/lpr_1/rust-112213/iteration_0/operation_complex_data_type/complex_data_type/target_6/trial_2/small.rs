#![feature(const_hash)]

fn b(f: isize, x: isize, y: isize, g: isize) {
    // implementation remains same
}

fn h(z: [isize; 7], i: usize, j: isize, k: usize, ac_result: *mut isize) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = ac_result;
    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b(0, 0, m, aa);
    return ab;
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: isize, ag: *mut isize) {
    let t: (*const usize, (usize, u8), (char, isize, (isize,), usize), char, ((f64, isize, i8), [f32; 1], (usize, u8), i8, (isize, isize), [f32; 1])), *const u8) = (
        core::ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        core::ptr::null(),
    );
    let mut u: ((f64, isize, i8),) = Default::default();
    loop {
        af = n;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = core::ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_isize, 9_i8);
        b(0, 0, n, 0);
        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b(af, ae, ah, s);
                b(z, p, n, r);
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
        let q: (usize, usize, [usize; 3], isize, isize) = (0, 0, ad, 0, 0);
        b([56; 7], [56; 7], 0, 0);
        unsafe {
            core::hash::Hash::hash(&q, &mut a);
            core::hash::Hash::hash(&ae, &mut a);
        }
        core::ptr::addr_of_mut!(ae.3)
    };
    println!(
        "{:?}",
        h(
            [56; 7],
            15609822513776909592_usize,
            652623562_isize,
            18399139786288871729_usize,
            ac_result
        )
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}