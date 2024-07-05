fn b<F: Hash, X: Hash, Y: Hash, G: Hash>(f: F, x: X, y: Y, g: G) {
    0; // No operations necessary
}

fn h(mut af: [isize; 7], i: usize, j: i32, k: u64, ac_result: *mut isize) -> [isize; 2] {
    let aa = [0; 6];
    let m = [0; 6];
    let mut ab = [0; 2];
    let n = ac_result;
    o(&mut ab, af, i, af, af, j, n);
    b(j, k, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), m, aa);
    return ab;
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    mut af: [isize; 7],
    p: [isize; 7],
    s: i32,
    ag: *mut isize,
) {
    let mut t0: *const usize = std::ptr::null();
    let t1: (usize, u8) = (0, 0);
    let t4: (
        (f64, i64, i8),
        [f32; 1],
        (usize, u8),
        i8,
        (isize, i64),
        [f32; 1],
    ) = ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]);
    let t5: *const u8 = std::ptr::null();
    loop {
        af = p;
        let ae = 0;
        t0 = std::ptr::addr_of!(t1.0);
        t4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n, 0);
        match t4.0 .2 {
            9 => {
                b(af, ae, -9223372036854775808_isize, s);
                b(z, p, n, r);
                return;
            }
            _ => {
                *ag = 88_isize;
            }
        }
    }
}

fn main() {
    let q0: u8 = 0;
    let q1: u128 = 0;
    let q2 = [0; 3];
    let q3 = 0;
    let q4: i16 = 0;
    let ac_result = &mut 0 as *mut isize;
    println!(
        "{:?}",
        h(
            [56, 56, 56, 56, 56, 56, 56],
            15609822513776909592,
            652623562,
            18399139786288871729,
            ac_result
        )
    );
}
