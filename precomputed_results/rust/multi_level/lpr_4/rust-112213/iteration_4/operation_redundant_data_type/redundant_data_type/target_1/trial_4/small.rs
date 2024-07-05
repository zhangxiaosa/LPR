#![feature(const_hash)]

fn b<f, w, d, e>(f: f, x: w, y: d, g: e) {
    f.hash(x);
    y.hash(x);
    g.hash(x);
}

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0, [0], 0);
    let q = (0, [0; 3]);
    unsafe {
        q.hash(a);
        ae.hash(a);
    }
    addr_of_mut!(ae.2)
}

fn o(z: [isize; 2], n: *mut isize, mut af: *mut isize, _: [isize; 7], ag: *mut usize) {
    let mut t = (
        0 as *const usize,
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
        0 as *const u8,
    );
    loop {
        af = n;
        t.0 = addr_of!(t.1 .0);
        b(0, 0, n, 0);
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
    b(652623562, 18399139786288871729, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], [0]);
    [13; 2]
}

fn main() {
    println!("{:?}", h([56; 7]));
    unsafe {
        println!("hash: {}", a.finish());
    }
}