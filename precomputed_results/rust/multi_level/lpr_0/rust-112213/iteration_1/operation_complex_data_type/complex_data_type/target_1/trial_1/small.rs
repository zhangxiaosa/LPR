use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};

fn main() {
    let mut a = DefaultHasher::new();

    fn b(f: impl Hash, x: impl Hash, y: impl Hash, g: impl Hash) {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }

    fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
        let ab = [13; 2];
        let n = unsafe {
            let mut ae = (0, 0, [0; 3], 0);
            let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
            b(z, z, 0, 0);
            q.hash(&mut a);
            ae.hash(&mut a);
            &mut ae.3
        };
        b(j, k, 0, 0);
        b([112; 6], 1, 0, 4);
        b((), (), [0; 6], [0; 6]);
        return ab;
    }

    fn o(
        z: [isize; 2],
        n: [isize; 7],
        r: usize,
        mut af: [isize; 7],
        p: [isize; 7],
        s: i32,
        _ag: *mut isize,
    ) {
        loop {
            af = n;
            let ae = 0;
            b(0, 0, n, 0);
            match 9 {
                9 => {
                    b(af, ae, 0, s);
                    b(z, p, n, r);
                    return;
                }
                _ => unsafe {
                    *_ag = 88;
                },
            }
        }
    }

    println!("{:?}", h(
        [56; 7],
        15609822513776909592,
        652623562,
        18399139786288871729
    ));
    println!("hash: {{}}", a.finish());
}