use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let mut a = DefaultHasher::new();
    let z = [56_isize; 7];
    let n = ac(z);

    b(652623562_i32, 18399139786288871729_u64, 0, 0, &mut a);
    b([112; 6], 1, 0, 4, &mut a);
    b((), (), [0], [0], &mut a);

    let result = [13; 2];

    println!("{:?}", result);
    println!("hash: {}", a.finish());
}

fn b<f: Hash, w: Hash, d: Hash, e: Hash>(f: f, x: w, y: d, g: e, hasher: &mut DefaultHasher) {
    f.hash(hasher);
    x.hash(hasher);
    y.hash(hasher);
    g.hash(hasher);
}

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    b(p, p, 0, 0, unsafe { &mut a });

    q.hash(unsafe { &mut a });
    ae.hash(unsafe { &mut a });

    ptr::addr_of_mut!(ae.3)
}

fn h(z: [isize; 7]) -> [isize; 2] {
    let n = ac(z);
    let result = [13; 2];

    b(0, 0, n, 0, &mut a);
    b(z, [56_isize; 7], n, 15609822513776909592, &mut a);

    result
}
