#![feature(const_hash)]

use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b(c, w, d, e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z, i, j, k) {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = ac(z);
    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b((), (), m, aa);
    return ab;
}

fn ac(p) {
    let ad = [0; 3];
    let mut ae = (0, 0, ad, 0);
    let q = (0, 0, ad, 0, 0);
    b(p, p, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(z, n, r, af, p, s, ag) {
    let mut t = (...);
    let mut u = ((f64, i64, i8),);

    loop {
        af = n;
        let ah = -9223372036854775808;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
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

fn main() {
    println!("{:?}", h([56; 7], 15609822513776909592, 652623562, 18399139786288871729));
    unsafe {
        println!("hash: {}", a.finish());
    }
}