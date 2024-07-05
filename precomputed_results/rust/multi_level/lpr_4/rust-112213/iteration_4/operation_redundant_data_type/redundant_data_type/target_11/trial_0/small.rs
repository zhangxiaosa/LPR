fn b<f: Hash, w: Hash, d: Hash>(f: f, x: w, y: d) {
    f.hash(&mut a);
    x.hash(&mut a);
    y.hash(&mut a);
}

fn ac(p: [isize; 7]) -> *mut usize {
    let q = (0, [0; 3]);
    b(p, p, 0);
    q.hash(&mut a);
    a.hash(&mut a);
    ptr::addr_of_mut!(ae.2)
}

fn o(z: [isize; 2], n: [isize; 7], mut af: [isize; 7], _: [isize; 7], ag: *mut usize) {
    let mut t: (
        *const isize,
        (isize, u8),
        (char, i32, (isize,), u64),
        char,
        (
            (f64, isize, i8),
            [f32; 1],
            (isize, u8),
            i8,
            (isize, isize),
            [f32; 1],
        ),
        *const u8,
    ) = (
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
                b(z, [56; 7], n, 0);
                return;
            }
            _ => unsafe {
                *ag = 88;
            },
        }
    }
}

fn h(z_decomposed: [isize; 7]) -> [isize; 2] {
    let n = ac(z_decomposed);
    o([13; 2], z_decomposed, z_decomposed, z_decomposed, n);
    b(652623562_i32, 18399139786288871729_u64, 0);
    b([112; 6], 1, 0);
    b((), (), [0], [0]);
    [13; 2]
}

fn main() {
    println!("{:?}", h([56; 7]));
}