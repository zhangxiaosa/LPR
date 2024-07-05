fn b(f, x, y, g) {
    f.hash(&mut DefaultHasher::new());
    x.hash(&mut DefaultHasher::new());
    y.hash(&mut DefaultHasher::new());
    g.hash(&mut DefaultHasher::new());
}

fn h(z, i, j, k) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b(z, z, 0, 0);
        q.hash(&mut DefaultHasher::new());
        ae.hash(&mut DefaultHasher::new());
        &mut ae.3
    };

    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b((), (), m, aa);
    ab
}

fn o(z, n, r, af, p, s, ag: *mut usize, _: usize) {
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

    let mut u: ((f64, i64, i8),) = Default::default();
    loop {
        af = n;
        let ah = -9223372036854775808;
        let ae = 0;
        t.0 = std::ptr::addr_of!(t.1.0);
        t.4.0 = (std::f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n, 0);
        u.0 = t.4.0;
        match u.0.2 {
            9 => {
                b(af, ae, ah, s);
                b(z, p, n, r);
                return;
            }
            v => unsafe {
                *ag = 88;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            [56; 7],
            15609822513776909592,
            652623562,
            18399139786288871729
        )
    );
}