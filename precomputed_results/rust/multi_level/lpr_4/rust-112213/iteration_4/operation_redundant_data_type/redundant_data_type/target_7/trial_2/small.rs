use std::hash::Hasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: u64 = 0;

fn b<f: Hash, w: Hash, d: Hash>(f: f, x: w, y: d) {
    unsafe {
        let mut hasher = std::collections::hash_map::DefaultHasher::new();
        f.hash(&mut hasher);
        x.hash(&mut hasher);
        y.hash(&mut hasher);
        a = hasher.finish();
    }
}

fn ac(p: &[isize]) -> *mut usize {
    let mut ae = (0, [0]);
    let q = (0, [0; 3]);
    b(p, p, 0);
    unsafe {
        let mut hasher = std::collections::hash_map::DefaultHasher::new();
        q.hash(&mut hasher);
        ae.hash(&mut hasher);
        a = hasher.finish();
    }
    ptr::addr_of_mut!(ae.1)
}

fn o(z: [isize; 2], n: [isize; 7], mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    let mut t = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        (
            (0., 1_102_345_069_964_335_552, 9),
            [0.],
            (0, 0),
            0,
            (0, 0),
            [0.],
        ),
        ptr::null(),
    );
    loop {
        af = n;
        t.0 = ptr::addr_of!(t.1 .0);
        b(0, 0, n);
        match t.4 .0 .2 {
            9 => {
                b(af, 0, -9_223_372_036_854_775_808, 0);
                b(z, [56_isize; 7], n);
                return;
            }
            _ => unsafe {
                *ag = 88_usize;
            },
        }
    }
}

fn h(z_decomposed: [isize; 7]) -> [isize; 2] {
    let n = ac(&z_decomposed[0]);
    o([13; 2], z_decomposed, z_decomposed, z_decomposed, n);
    b(652623562, 18399139786288871729, 0);
    b([112; 6], 1, 0, 4_u64);
    b((), (), [0], [0]);
    [13; 2]
}

fn main() {
    println!("{:?}", h([56_isize; 7]));
    unsafe {
        println!("hash: {}", a);
    }
}