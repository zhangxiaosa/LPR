#![feature(const_hash)]

fn main() {
    let mut a: u64 = 0;
    let mut b: u64 = 0;
    let mut c: u32 = 0;
    let mut d: u64 = 0;
    let mut e: [isize; 7] = [0; 7];
    let mut f: usize = 0;
    let mut g: i32 = 0;
    let mut h: [isize; 2] = [0; 2];
    let mut i: isize = 1;
    let mut j: [isize; 6] = [0; 6];
    let mut k: [isize; 6] = [0; 6];
    let mut l: [isize; 2] = [13, 13];
    let mut m: *mut isize = std::ptr::null_mut();
    let mut n: usize = 0;
    let mut o: *mut isize = std::ptr::null_mut();
    let mut p: [isize; 7] = [0; 7];
    let mut q: [isize; 7] = [0; 7];
    let mut r: i32 = 0;
    let mut s: *mut isize = std::ptr::null_mut();
    let mut t: isize = 0;
    let mut u: *const usize = std::ptr::null();
    let mut v: usize = 0;
    let mut w: u8 = 0;
    let mut x: u128 = 0;
    let mut y: [u64; 3] = [0; 3];
    let mut z: isize = 0;

    u = a as *const usize;
    x = 0;
    j[0] = 0;
    t = w as isize;

    for _ in 0..1 {
        o = &mut t as *mut isize;
        q[0] = p[0];
        q[1] = p[1];
        for _ in 0..1 {
            q[2..4].hash(&mut q);
            q[4..7].hash(&mut q);
        }
        a.hash(&mut q);
        q.len().hash(&mut q);
        b.hash(&mut q);
        c.hash(&mut q);
        d.hash(&mut q);
    }

    h[0] = 0;
    h[1] = 0;

    for _ in 0..1 {
        p = o;
        for _ in 0..1 {
            w = 9;
            if w == 9 {
                for _ in 0..1 {
                    b.hash(&mut p);
                    j.hash(&mut p);
                }
            } else {
                z = 88;
                unsafe {
                    *s = z;
                }
            }
        }
    }

    println!("{:?}", l);
    unsafe {
        println!("hash: {}", n);
    }
}
