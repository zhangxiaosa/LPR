use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let mut a = DefaultHasher::new();

    fn b<h: Hash, w: Hash, d: Hash, e: Hash>(f: h, x: w, y: d, g: e) {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }

    fn h() {
        let l = 1;
        let aa = [0; 6];
        let m = [0; 6];
        let ab = [13; 2];
        let n = ac();
        o();
        b(0, 0, 0, 0);
        b([112; 6], l, 0, 4);
        b((), (), m, aa);
        return ab;
    }

    fn ac() -> *mut i8 {
        let ad = [0; 3];
        let ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b(0, 0, 0, 0);
        return ptr::addr_of_mut!(ae.3);
    }

    fn o() {
        let z = [0; 2];
        let n = [0; 7];
        let r = 0;
        let mut af = [0; 7];
        let p = [0; 7];
        let s = 0;
        let mut ag: *mut i8;
        let mut t = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
        let mut u = ((0., 0, 0),);

        loop {
            af = n;
            let ah = -9223372036854775808;
            let ae = 0;
            t.0 = ptr::addr_of!(t.1.0);
            t.4.0 = (f64::NAN, 1102345069964335552, 9);
            b(0, 0, 0, 0);
            u.0 = t.4.0;

            match u.0.2 {
                9 => {
                    b(af, ae, ah, s);
                    b(z, p, n, r);
                    return;
                }
                _ => {
                    *ag = 88;
                }
            }
        }
    }

    println!("{:?}", h());
    println!("hash: {}", a.finish());
}