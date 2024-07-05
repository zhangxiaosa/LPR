use std::hash::{Hash, Hasher};
use std::ptr;

fn hash<T: Hash>(value: &T) {
    let mut hasher = DefaultHasher::new();
    value.hash(&mut hasher);
}

fn b<T: Hash, U: Hash, V: Hash, W: Hash>(f: T, x: U, y: V, g: W) {
    hash(&f);
    hash(&x);
    hash(&y);
    hash(&g);
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let mut ae = (0, 0, [0; 3], 0);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    b(&z, &z, 0, 0);
    hash(&q);
    hash(&ae.2);
    o([13, 13], z, i, z, z, j, &mut ae.3);
    hash(&(j, k, 0, 0));
    hash(&([112; 6], 1, 0, 4));
    hash(&((), (), [0], aa));
    [13, 13]
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    mut af: [isize; 7],
    p: [isize; 7],
    s: i32,
    _ag: &mut isize,
) {
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
        let ae = 0;
        t.0 = ptr::addr_of!(t.1.0);
        t.4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, &n, 0);
        match t.4.0.2 {
            9 => {
                b(&af, ae, 0, s);
                b(&z, &p, &n, r);
                return;
            }
            _v => {
                *_ag = 88_isize;
            }
        }
    }
}

fn main() {
    println!("{:?}", h([56; 7], 15609822513776909592, 652623562, 18399139786288871729));
}
