#![feature(const_hash)]

fn b(f: impl std::hash::Hash, x: impl std::hash::Hash, y: impl std::hash::Hash, g: impl std::hash::Hash) {
    let mut hasher = std::collections::hash_map::DefaultHasher::new();
    f.hash(&mut hasher);
    x.hash(&mut hasher);
    y.hash(&mut hasher);
    g.hash(&mut hasher);
}

fn ac(p: [isize; 7]) -> *mut isize {
    let ae = (0, [0], 0);
    let q = (0, [0; 3]);
    b(&p, &p, 0, 0);
    q.hash(&mut a.0);
    ae.hash(&mut a.0);
    unsafe { std::ptr::addr_of_mut!(ae.2) }
}

fn o(z: [isize; 2], n: [isize; 7], mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    loop {
        af.copy_from_slice(&n);
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
            std::ptr::null(),
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
            std::ptr::null(),
        );
        b(0, 0, n, 0);
        match t.4.2 {
            9 => {
                b(&af, 0, -9_223_372_036_854_775_808_isize, 0);
                b(&z, [56_isize; 7], n, 0);
                return;
            }
            _ => unsafe {
                *ag = 88;
            },
        }
    }
}

fn h(z_decomposed: [isize; 7]) -> [isize; 2] {
    let ae = ac(z_decomposed);
    o([13; 2], z_decomposed, z_decomposed, z_decomposed, ae as *mut isize);
    b(652623562, 18399139786288871729, 0, 0);
    b([112; 6], 1, 0, 4 as isize);
    [13; 2]
}

fn main() {
    println!("{:?}", h([56_isize; 7]));
}