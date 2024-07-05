#![feature(const_hash)]


static mut a: usize = 0;

fn b(f: u64, x: u64, y: u64, g: u64) {
    unsafe {
        a = f;
        a = x;
        a = y;
        a = g;
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l: i32 = 1;
    let aa: [isize; 6] = [0; 6];
    let mut m: [isize; 6] = [0; 6];
    let ab: [isize; 2] = [13; 2];
    let n: *mut isize = std::ptr::null_mut();
    o(ab, z, i, z, z, j, n);
    b(j as u64, k as u64, 0, 0);
    b(0, 0, m as u64, aa as u64);
    return ab;
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, _ag: *mut isize) {
    let mut t: u64 = 0;
    loop {
        af = n;
        let ae = 0;
        let mut s: u8 = 0;
        t = unsafe { *(_ag as *const u64) };
        match t {
            9 => {
                b(af as u64, ae as u64, 0, s as u64);
                b(z as u64, p as u64, n as u64, r as u64);
                return;
            }
            _ => unsafe {
                *_ag = 88_isize;
            },
        }
    }
}

fn main() {
    let z: [isize; 7] = [56; 7];
    let i: usize = 15609822513776909592;
    let j: i32 = 652623562;
    let k: u64 = 18399139786288871729;
    println!("{:?}", h(z, i, j, k));
    unsafe {
        println!("hash: {}", a);
    }
}