use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let mut a = DefaultHasher::new();

    fn b<T: Hash>(f: T, x: T, y: T, g: T) {
        let mut a = a;
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }

    fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
        let aa = [0];
        let mut a = a;
        let n = {
            let mut ae = (0, 0, [0], 0);
            let q = (0, 0, [0; 3], 0);
            b(z, z, 0, 0);
            q.hash(&mut a);
            ae.hash(&mut a);
            ptr::addr_of_mut!(ae.3)
        };
        o([13; 2], z, i, z, z, j, n);
        b(j, k, 0, 0);
        b([112; 6], 1, 0, 4);
        b((), (), [0], aa);
        return [13; 2];
    }

    fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut usize) {
        let mut t = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
        loop {
            af = n;
            let ae = 0;
            t.0 = ptr::addr_of!(t.1.0);
            t.4.0 = (f64::NAN, 1102345069964335552_isize, 9_i8);
            b(0, 0, n, 0);
            match t.4.0.2 {
                9 => {
                    b(af, ae, -9223372036854775808_isize, s);
                    b(z, p, n, r);
                    return;
                }
                _ => unsafe {
                    *ag = 88_usize;
                },
            }
        }
    }
    
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64));
    unsafe {
        println!("hash: {}", a.finish());
    }
}