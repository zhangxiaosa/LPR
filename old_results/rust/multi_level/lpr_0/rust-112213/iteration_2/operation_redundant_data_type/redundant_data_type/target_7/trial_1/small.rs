use std::hash::Hasher;

fn b<T>(f: T, x: T, y: T, g: T) {
    f.hash(&mut a);
    x.hash(&mut a);
    y.hash(&mut a);
    g.hash(&mut a);
}

fn h(z: [isize], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0, 0];
    let n = {
        let ad = [0, 0, 0];
        let mut ae = (0, 0, ad);
        let q: (u8, u128, [u64; 3], isize) = (0, 0, ad, 0);
        b(z, z, 0, 0);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        &mut ae.2 as *mut _
    };
    o([13, 13], z, i, z, z, j, n as *mut isize);
    b(j, k, 0, 0);
    b([112, 112, 112, 112, 112, 112], 1, 0, 4);
    b((), (), [0, 0], aa);
    return [13, 13];
}

fn o(z: [isize], n: [isize], r: usize, mut af: [isize], p: [isize], s: i32, _ag: *mut u8) {
    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), f32, (usize, u8), i8, (isize, i64), f32), *const u8) = (
        std::ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0.0, 0, 0), 0.0, (0, 0), 0, (0, 0), 0.0),
        std::ptr::null()
    );
    loop {
        af = n.to_vec().into_boxed_slice();
        let ae = 0;
        t.0 = &t.1 .0 as *const _;
        b(0, 0, n.to_vec().into_boxed_slice(), 0);
        match t.4 .0 .2 {
            9 => {
                b(af, ae, 0, s);
                b(z, p, n.to_vec().into_boxed_slice(), r);
                return;
            }
            v => unsafe {
                *_ag = 88_u8 as isize;
            },
        }
    }
}

fn main() {
    let mut a = std::collections::hash_map::DefaultHasher::new();
    println!("{:?}", h(vec![56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64));
    unsafe {
        println!("hash: {}", a);
    }
}