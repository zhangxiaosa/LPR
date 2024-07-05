#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0, [0], 0);
    let q = (0, [0; 3]);

    p.hash(&mut a);
    p.hash(&mut a);
    0.hash(&mut a);
    0.hash(&mut a);

    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }

    ptr::addr_of_mut!(ae.2)
}

fn o(z: [isize; 2], n: [isize; 7], mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
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
        af = n;
        t.0 = ptr::addr_of!(t.1.0);

        0.hash(&mut a);
        0.hash(&mut a);
        n.hash(&mut a);
        0.hash(&mut a);

        match t.4.0.2 {
            9 => {
                af.hash(&mut a);
                0.hash(&mut a);
                (-9_223_372_036_854_775_808 as isize).hash(&mut a);
                0.hash(&mut a);

                z.hash(&mut a);
                [56_isize; 7].hash(&mut a);
                n.hash(&mut a);
                0.hash(&mut a);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn h(z_decomposed: [isize; 7]) -> [isize; 2] {
    let n = ac(z_decomposed);
    o([13; 2], z_decomposed, z_decomposed, z_decomposed, n);

    652623562_i32.hash(&mut a);
    18399139786288871729_u64.hash(&mut a);
    0.hash(&mut a);
    0.hash(&mut a);

    [13; 2]
}

fn main() {
    println!("{:?}", h([56_isize; 7]));

    let result = unsafe { a.finish() };
    println!("hash: {}", result);
}
