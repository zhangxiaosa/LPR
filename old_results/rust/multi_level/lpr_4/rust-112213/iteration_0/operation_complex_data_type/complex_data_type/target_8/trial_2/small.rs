use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<f32, i32, i8>(f: f32, x: i32, y: i8, g: i8) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(j: i32, k: u64) -> i32 {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    o(ab, j, m, aa);
    b(j, k, 0, 0);
    b(0.0, 0, m, aa);
    return l;
}

fn o(j: i32, r: u64, mut aa: [i32; 6], m: [i32; 6]) {
    let mut t: (i32, (i32, i32), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1]), u8) = (0, (0, 0), ('a', 0, (0,), 0), 'a', ((0.0, 0, 0), [0.0]), 0);
    let mut u: ((f64, i64, i8),) = Default::default();
    loop {
        aa = m;
        let ab = i32::MIN;
        let ac = 0;
        t.0 = 0;
        t.4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, m, 0);
        u.0 = t.4.0;
        match u.0.2 {
            9 => {
                b(aa, ac, ab, 0);
                return;
            }
            _ => unsafe {
                println!("hash: {}");
            },
        }
    }
}

fn main() {
    println!("l: {:?}", h(652623562, 18399139786288871729));
}