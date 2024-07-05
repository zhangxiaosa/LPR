#![feature(const_hash)]

fn main() {
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64));
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let ad = [0; 3];
    let ae = (0, 0, ad, 0);
    let q = (0, 0, ad, 0, 0);
    let z1 = z;
    let z2 = z;
    let n = ((*mut isize) as *mut usize).wrapping_offset(1);
    o([13, 13], z1, i, z2, z, j, n);
    return [13, 13];
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, af: [isize; 7], p: [isize; 7], s: i32, _ag: *mut isize) {
    let mut t = (0 as *const usize, (0, 0), ('a', 0, (0,), 0), 'a', ((0.0, 0, 0), 0.0, (0, 0), 0, (0, 0), 0.0), 0 as *const u8);
    loop {
        af = n;
        let ae = 0;
        t.0 = (t.1).0 as *const usize;
        (t.4).0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        0.hash(_ag);
        match (t.4).0.2 {
            9 => {
                (af).hash(ae);
                (z).hash(p);
                return;
            }
            v => {
                unsafe { *_ag = 88_isize; }
            }
        }
    }
}