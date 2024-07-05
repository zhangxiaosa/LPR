#![feature(const_hash)]

fn main() {
    println!("{:?}", h(
        [56_isize; 7],
        15609822513776909592_usize,
        652623562_i32,
        18399139786288871729_u64
    ));
    unsafe {
        println!("hash: {{}}", a.finish());
    }
}

fn h(
    z: [isize; 7],
    i: usize,
    j: i32,
    k: u64
) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = {
        let ad = [0; 3];
        let ae = (0, 0, ad, 0);
        let q = (0_u8, 0_u128, [0_u64; 3], 0_isize, 0_i16);
        b(z, z, 0, 0);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        &mut ae.3
    };
    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112_u8; 6], l, 0, 4);
    b((), (), m, aa);
    return ab;
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    af: [isize; 7],
    p: [isize; 7],
    s: i32,
    ag: *mut isize
) {
    let mut t = (
        core::ptr::null(),
        (0_usize, 0_u8),
        ('a', 0_i32, (0_i64,), 0_u64),
        'a',
        ((0_f64, 0_i64, 0_i8), [0_f32; 1], (0_usize, 0_u8), 0_i8, (0_isize, 0_i64), [0_f32; 1]),
        core::ptr::null()
    );
    let mut u = ((0_f64, 0_i64, 0_i8), Default::default());
    loop {
        af = n;
        let ah = -9223372036854775808;
        let ae = 0;
        t.0 = core::ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n, 0);
        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b(af, ae, ah, s);
                b(z, p, n, r);
                return;
            }
            v => unsafe {
                *ag = 88;
            }
        }
    }
}
