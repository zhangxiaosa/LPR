fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let n = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        z.hash(&mut a);
        z.hash(&mut a);
        0.hash(&mut a);
        0.hash(&mut a);
        q.hash(&mut a);
        ae.hash(&mut a);
        ptr::addr_of_mut!(ae.3)
    };
    o([13, 13], z, i, z, z, j, n);
    j.hash(&mut a);
    k.hash(&mut a);
    0.hash(&mut a);
    0.hash(&mut a);
    ().hash(&mut a);
    ().hash(&mut a);
    [0].hash(&mut a);
    aa.hash(&mut a);
    [13, 13]
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, _ag: *mut isize) {
    af = n;
    let ae = 0;
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
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    loop {
        af = n;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        z.hash(&mut a);
        z.hash(&mut a);
        n.hash(&mut a);
        0.hash(&mut a);
        match t.4 .0 .2 {
            9 => {
                af.hash(&mut a);
                ae.hash(&mut a);
                0.hash(&mut a);
                s.hash(&mut a);
                z.hash(&mut a);
                p.hash(&mut a);
                n.hash(&mut a);
                r.hash(&mut a);
                return;
            }
            v => *_ag = 88_isize,
        }
    }
}

fn main() {
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64));
    println!("hash: {}", a.finish());
}