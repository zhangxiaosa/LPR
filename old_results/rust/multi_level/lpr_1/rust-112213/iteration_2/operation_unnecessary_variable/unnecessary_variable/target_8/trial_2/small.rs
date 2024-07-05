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
    let ae = 0;
    b(0, 0, n, 0);
    b(af, ae, -9223372036854775808_isize, s);
    b(z, p, n, r);
    *ag = 88_isize;
}

fn main() {
    let mut ae3 = 0;
    let ae2 = [0; 3];
    b(
        [56, 56, 56, 56, 56, 56, 56],
        [56, 56, 56, 56, 56, 56, 56],
        0,
        0,
    );
    let ac_result = &mut ae3 as *mut isize;
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