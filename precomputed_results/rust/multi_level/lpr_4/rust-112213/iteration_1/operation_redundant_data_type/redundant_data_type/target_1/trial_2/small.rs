fn h(z: &[isize], _: u64, _: i32) -> [isize; 2] {
    let aa = [0];
    let n = ac(z);
    o([13; 2], z, 15609822513776909592, z, z, n);
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], aa);
    return [13; 2];
}

fn ac(p: &[isize; 7]) -> *mut i8 {
    let mut ae = (0_i64, 0_i64, [0], 0_i64);
    let q: (u8, u128, [u64; 3], i64, i16) = (0, 0, [0; 3], 0, 0);
    b(p, p, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(z: [isize; 2], n: &[isize; 7], r: u64, mut af: [isize; 7], _: [isize; 7], ag: *mut u8) {
    let mut t: (
        *const u64,
        (u64, u8),
        (char, i32, (i64,), u64),
        char,
        (
            (f64, i64, i8),
            [f32; 1],
            (u64, u8),
            i8,
            (i64, i64),
            [f32; 1],
        ),
        *const u8,
    ) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    loop {
        af = n;
        let ah = -9_223_372_036_854_775_808_i64;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        b(0, 0, n, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, ae, ah, 0);
                b(z, [56_isize; 7], n, r);
                return;
            }
            _ => unsafe {
                *ag = 88_u8;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h([56_isize; 7], 15609822513776909592_u64, 652623562_i32)
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}