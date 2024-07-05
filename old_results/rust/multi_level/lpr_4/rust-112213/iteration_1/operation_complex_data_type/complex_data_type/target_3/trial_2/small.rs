use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let mut a = DefaultHasher::new();

    let mut t_0: *const usize = std::ptr::null();
    let mut t_1_0: usize = 0;
    let mut t_1_1: u8 = 0;
    let mut t_2_0: char = 'a';
    let mut t_2_1: i32 = 0;
    let mut t_2_2_0: i64 = 0;
    let mut t_4_0_0: f64 = std::f64::NAN;
    let mut t_4_0_1: i64 = 1_102_345_069_964_335_552;
    let mut t_4_0_2: i8 = 9;
    let mut ag: *mut isize = std::ptr::null_mut();

    unsafe {
        let mut a_ref = &mut a;

        fn b<f, w, d, e>(f: f, x: w, y: d, g: e, a: &mut DefaultHasher)
        where
            f: Hash,
            w: Hash,
            d: Hash,
            e: Hash,
        {
            f.hash(a);
            x.hash(a);
            y.hash(a);
            g.hash(a);
        }

        fn h(z: [isize; 7], _: usize, _: i32) -> [isize; 2] {
            let aa = [0];
            let n = ac(z, a_ref);
            o([13; 2], z, 15609822513776909592, z, z, n, a_ref);
            b(652623562_i32, 18399139786288871729_u64, 0, 0, a_ref);
            b([112; 6], 1, 0, 4, a_ref);
            b((), (), [0], aa, a_ref);
            return [13; 2];
        }

        fn ac(p: [isize; 7], a: &mut DefaultHasher) -> *mut isize {
            let mut ae = (0_isize, 0_isize, [0], 0_isize);
            let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
            b(p, p, 0, 0, a);
            q.hash(a);
            ae.hash(a);
            return std::ptr::addr_of_mut!(ae.3);
        }

        fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7], ag: *mut isize, a: &mut DefaultHasher) {
            let mut t = (
                std::ptr::null(),
                (0, 0),
                ('a', 0, (0,), 0),
                'a',
                ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
                std::ptr::null(),
            );
            loop {
                af = n;
                let ah = -9_223_372_036_854_775_808_isize;
                let ae = 0;
                t.0 = std::ptr::addr_of!(t.1.0);
                t.4.0 = (std::f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
                b(0, 0, n, 0, a);
                match t.4.0 .2 {
                    9 => {
                        b(af, ae, ah, 0, a);
                        b(z, [56_isize; 7], n, r, a);
                        return;
                    }
                    _ => unsafe {
                        *ag = 88_isize;
                    },
                }
            }
        }

        let result = h([56_isize; 7], 15609822513776909592_usize, 652623562_i32);
        println!("{:?}", result);

        println!("hash: {}", a.finish());
    }
}