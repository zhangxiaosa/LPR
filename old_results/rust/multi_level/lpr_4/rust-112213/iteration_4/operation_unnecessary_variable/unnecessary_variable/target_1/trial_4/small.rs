fn b() {}

fn ac(_p: [isize; 7]) -> *mut isize {
    let _ae = (0, [0], 0);
    ptr::addr_of_mut!(_ae.2)
}

fn o(z: [isize; 2], _n: [isize; 7], mut af: [isize; 7], _z: [isize; 7], _n_ptr: *mut isize) {
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
        af = _n;
        ptr::addr_of!(t.1 .0);
        match t.4 .0 .2 {
            9 => {
                b();
                b(z, [56_isize; 7], _n, 0);
                return;
            }
            _ => unsafe {
                *_n_ptr = 88_isize;
            },
        }
    }
}

fn h(z_decomposed: [isize; 7]) -> [isize; 2] {
    let _n = ac(z_decomposed);
    let z = z_decomposed;
    o([13; 2], z, z, z, _n);
    [13; 2]
}

fn main() {
    println!("{:?}", h([56_isize; 7]));
}