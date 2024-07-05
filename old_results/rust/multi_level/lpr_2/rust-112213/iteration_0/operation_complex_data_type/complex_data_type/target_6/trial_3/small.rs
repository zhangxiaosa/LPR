#![feature(const_hash)]

fn main() {
    let l: usize = 1;
    let aa: [isize; 6] = [0; 6];
    let m: [isize; 6] = [0; 6];
    let ab: [isize; 2] = [13; 2];
    let ah: isize = -9223372036854775808;
    let ae: isize = 0;
    let mut ag: usize = 0;
    let mut t: (
        *const usize,
        (usize, i8),
        (char, i32, (isize,), u64),
        char,
        ((f64, isize, i8), [f32; 1], (usize, i8), i8, (isize, isize), [f32; 1]),
        *const u8
    ) = (
        std::ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        std::ptr::null()
    );
    let mut u: ((f64, isize, i8),) = Default::default();

    loop {
        let af: [isize; 7] = z;
        t.0 = std::ptr::addr_of!(t.1 .0);
        t.4 .0 = (std::f64::NAN, 1102345069964335552, 9);
        b(0, 0, n, 0);
        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b(af, ae, ah, s);
                b(z, p, n, r);
                break;
            }
            v => {
                unsafe {
                    ag = 88;
                }
            }
        }
    }

    println!("{:?}", h(
        [56_isize; 7],
        15609822513776909592_usize,
        652623562_i32,
        18399139786288871729_u64
    ));
    unsafe {
        println!("hash: {{}}", a.finish());
    }
}
