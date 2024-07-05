fn b(f, x, y, g) {
    unsafe {
        std::hash::Hash::hash(&f, &mut a);
        std::hash::Hash::hash(&x, &mut a);
        std::hash::Hash::hash(&y, &mut a);
        std::hash::Hash::hash(&g, &mut a);
    }
}

fn h(z: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let n = ac(&z);
    o([13; 2], &z, 15609822513776909592, &z, &z, n);
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], ());
    [13; 2]
}

fn ac(p: &[isize; 7]) -> *mut isize {
    let mut ae = [0_isize; 4];
    b(p, p, 0, 0);
    std::hash::Hash::hash(&q, &mut a);
    std::hash::Hash::hash(&ae, &mut a);
    &mut ae[3] as *mut isize
}

fn o(z: [isize; 2], n: &[isize; 7], r: usize, mut af: &mut [isize; 7], _: &[isize; 7], ag: *mut isize) {
    loop {
        af.copy_from_slice(n);
        let ah = -9_223_372_036_854_775_808;
        let ae = 0_isize;
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
            ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
            std::ptr::null(),
        );
        
        af = n;
        t.0 = &t.1.0 as *const usize;
        t.4.0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        b(0, 0, &&n, 0);
        
        match t.4.0.2 {
            9 => {
                b(af, ae, ah, 0);
                b(z, [56_isize; 7], &&n, r);
                return;
            }
            _ => unsafe {
                *ag = 88;
            },
        }
    }
}

fn main() {
    unsafe {
        println!("hash: {}", a.finish());
    }
}