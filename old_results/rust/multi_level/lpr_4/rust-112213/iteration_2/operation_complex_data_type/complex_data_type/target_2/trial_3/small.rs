#![feature(const_hash)]
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<f: Hash, w: Hash, d: Hash, e: Hash>(f: f, x: w, y: d, g: e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z_1: isize, z_2: isize, z_3: isize, z_4: isize, z_5: isize, z_6: isize, z_7: isize, _: usize, _: i32) -> [isize; 2] {
    let n_1 = ac(z_1, z_2, z_3, z_4, z_5, z_6, z_7);
    o([13_isize; 2], [13_isize; 7], 15609822513776909592, [13_isize; 7], [13_isize; 7], n_1);
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112_u8; 6], 1, 0, 4);
    b((), (), [0], [0]);
    return [13_isize; 2];
}

fn ac(p_1: isize, p_2: isize, p_3: isize, p_4: isize, p_5: isize, p_6: isize, p_7: isize) -> *mut isize {
    let mut ae_1 = (0_isize, 0_isize, [0_isize], 0_isize);
    let q_1: (u8, u128, [u64; 3], isize, i16) = (0_u8, 0_u128, [0_u64; 3], 0_isize, 0_i16);
    b((p_1, p_2, p_3, p_4, p_5, p_6, p_7), (p_1, p_2, p_3, p_4, p_5, p_6, p_7), 0, 0);
    unsafe {
        q_1.hash(&mut a);
        ae_1.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae_1.3);
}

fn o(z_1: isize, z_2: isize, n_1: isize, n_2: isize, n_3: isize, n_4: isize, n_5: isize, n_6: isize, n_7: isize, n_8: usize, n_9: isize, n_10: isize, n_11: isize, mut af_1: isize, mut af_2: isize, mut af_3: isize, mut af_4: isize, mut af_5: isize, mut af_6: isize, mut af_7: isize, _: [isize; 7], _: [isize; 7], _: usize, _: isize, ag: *mut isize) {
    let mut t_1: *const usize = ptr::null();
    let mut t_2: (usize, u8) = (0, 0);
    let mut t_3: (char, i32, (i64,), u64) = ('a', 0, (0,), 0);
    let mut t_4: char = 'a';
    let mut t_5: ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]) = ((0., 0, 0), [0_f32; 1], (0, 0), 0, (0_isize, 0_i64), [0_f32; 1]);
    let mut t_6: *const u8 = ptr::null();
    loop {
        af_1 = n_1;
        let ah_1 = -9_223_372_036_854_775_808_isize;
        let ae_2 = 0_isize;
        t_1 = ptr::addr_of!(t_2.0);
        t_5.0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        b(0, 0, n_1, 0);
        match t_5.0.2 {
            9 => {
                b(af_1, ae_2, ah_1, 0);
                b(z_1, [56_isize; 7], n_1, n_8);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!("{:?}", h(56, 56, 56, 56, 56, 56, 56, 15609822513776909592, 652623562));
    unsafe {
        println!("hash: {}", a.finish());
    }
}