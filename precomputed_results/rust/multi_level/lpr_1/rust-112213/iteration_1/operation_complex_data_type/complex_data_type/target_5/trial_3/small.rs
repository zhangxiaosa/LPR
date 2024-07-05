use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let mut a = DefaultHasher::new();

    fn b(f: isize, x: usize, y: i32, g: isize) {
        let mut a = &mut a;
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }

    fn h(z: [isize; 7], i: usize, j: i32, k: u64, ac_result: &mut isize) -> [isize; 2] {
        let aa = [0; 6];
        let m = [0; 6];
        let ab = [13; 2];
        let n = ac_result;

        fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: &mut isize) {
            let mut t = (0 as *const usize,
                         (0, 0),
                         ('a', 0, (0), 0),
                         'a',
                         ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
                         0 as *const u8);
            let mut u: ((f64, i64, i8),) = Default::default();

            loop {
                af = n;
                let ah = -9223372036854775808;
                let ae = 0;
                t.0 = &t.1 .0 as *const usize;
                t.4 .0 = (f64::NAN, 1102345069964335552, 9);
                b(0, 0, n, 0);
                u.0 = t.4 .0;
                match u.0 .2 {
                    9 => {
                        b(af, ae, ah, s);
                        b(z, p, n, r);
                        return;
                    }
                    _ => unsafe {
                        *ag = 88;
                    },
                }
            }
        }

        o(ab, z, i, z, z, j, n);
        b(j, k, 0, 0);
        b([112; 6], 1, 0, 4);
        b((), (), m, aa);
        return ab;
    }

    let ac_result;
    {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b([56; 7], [56; 7], 0, 0);
        q.hash(&mut a);
        ae.hash(&mut a);
        ac_result = &mut ae.3;
    }

    println!("{:?}",
             h([56; 7], 15609822513776909592, 652623562, 18399139786288871729, ac_result));

    println!("hash: {}", a.finish());
}