#![feature(const_hash)]

static mut a: std::collections::hash_map::DefaultHasher = std::collections::hash_map::DefaultHasher::new();

fn b<f: std::hash::Hash, x: std::hash::Hash, y: std::hash::Hash, g: std::hash::Hash>(f: f, x: x, y: y, g: g) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn ac(p: [isize; 7]) -> *mut isize {
    b(p, p, 0, 0);
    unsafe {
        std::ptr::addr_of_mut!(p[2])
    }
}

fn o(z: [isize; 2], n: [isize; 7], mut af: [isize; 7], ag: *mut isize) {
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
    loop {
        af = n;
        t.0 = std::ptr::addr_of!(t.1 .0);
        b(0, 0, n, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, 0, -9_223_372_036_854_775_808_isize, 0);
                b(z, [56_isize; 7], n, 0);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn h(z_decomposed: [isize; 7]) -> [isize; 2] {
    let z = z_decomposed;
    o([13; 2], z, z, z_decomposed.as_mut_ptr());
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], [0]);
    [13; 2]
}

fn main() {
    println!("{:?}", h([56_isize; 7]));
    unsafe {
        println!("hash: {}", a.finish());
    }
}