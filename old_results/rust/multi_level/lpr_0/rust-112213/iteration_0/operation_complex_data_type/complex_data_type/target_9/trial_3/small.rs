#![feature(const_hash)]

use std::ptr;

static mut a: u64 = 0;

fn b(f: impl Hash, x: impl Hash, y: impl Hash, g: impl Hash) {
    unsafe {
        // Individual hash calculations to replace original code
        let hash_f = hash_data(&f);
        let hash_x = hash_data(&x);
        let hash_y = hash_data(&y);
        let hash_g = hash_data(&g);
        // Assign hash calculations to `a`
        a = hash_f.wrapping_add(a);
        a = hash_x.wrapping_add(a);
        a = hash_y.wrapping_add(a);
        a = hash_g.wrapping_add(a);
    }
}

fn h(z_0: isize, z_1: isize, z_2: isize, z_3: isize, z_4: isize, z_5: isize, z_6: isize, i: usize, j: i32, k: u64) -> (isize, isize) {
    let l = 1;
    let aa_0 = 0;
    let aa_1 = 0;
    let aa_2 = 0;
    let aa_3 = 0;
    let aa_4 = 0;
    let aa_5 = 0;
    let m_0 = 0;
    let m_1 = 0;
    let m_2 = 0;
    let m_3 = 0;
    let m_4 = 0;
    let m_5 = 0;
    let ab_0 = 13;
    let ab_1 = 13;

    let n_0 = 0;
    let n_1 = 0;

    o(ab_0, ab_1, z_0, z_1, z_2, z_3, z_4, z_5, z_6, i, n_0, n_1, j);
    b(j, k, 0, 0);
    b(112, 112, 112, l);
    b((), (), m_0, aa_0);

    return (ab_0, ab_1);
}

fn o(
    z_0: isize,
    z_1: isize,
    n_0: isize,
    n_1: isize,
    n_2: isize,
    n_3: isize,
    n_4: isize,
    n_5: isize,
    n_6: isize,
    r: usize,
    s: i32
) {
    let mut u_0 = 0.0;
    let mut u_1 = 0;
    let mut u_2 = 0;
    let mut t_0 = ptr::null();
    let mut t_1 = (0, 0);
    let mut t_2 = ('a', 0, (0,), 0);
    let mut t_3 = 'a';
    let mut t_4_0 = 0.0;
    let mut t_4_1 = 0;
    let mut t_4_2 = 0;
    let mut t_4_3 = 0.0;
    let mut t_4_4 = (0, 0);
    let mut t_4_5 = [0.0];
    let mut t_4_6 = (0, 0);
    let mut t_4_7 = 0;
    let mut t_4_8 = (0, 0);
    let mut t_4_9 = [0.0];
    let mut t_5 = ptr::null();

    let mut af_0 = 0;
    let mut af_1 = 0;
    let mut af_2 = 0;
    let mut af_3 = 0;
    let mut af_4 = 0;
    let mut af_5 = 0;
    let mut af_6 = 0;

    let mut p_0 = 0;
    let mut p_1 = 0;
    let mut p_2 = 0;
    let mut p_3 = 0;
    let mut p_4 = 0;
    let mut p_5 = 0;
    let mut p_6 = 0;

    let mut ag = 0 as *mut isize;

    af_0 = n_0;
    af_1 = n_1;
    af_2 = n_2;
    af_3 = n_3;
    af_4 = n_4;
    af_5 = n_5;
    af_6 = n_6;

    let mut ah = -9223372036854775808_isize;
    let mut ae = 0;
    t_0 = &mut t_1.0;
    t_4_0 = f64::NAN;
    t_4_1 = 1102345069964335552_i64;
    t_4_2 = 9_i8;
    b(0, 0, 0, n_0);
    u_0 = t_4_0;
    u_1 = t_4_1;
    u_2 = t_4_2;

    match u_2 {
        9 => {
            b(af_0, af_1, af_2, s);
            b(z_0, z_1, n_5, r);
            return;
        }
        _v => unsafe {
            *ag = 88;
        },
    }
}

fn main() {
    let z_0 = 56;
    let z_1 = 56;
    let z_2 = 56;
    let z_3 = 56;
    let z_4 = 56;
    let z_5 = 56;
    let z_6 = 56;
    let i = 15609822513776909592;
    let j = 652623562;
    let k = 18399139786288871729;

    println!("{:?}", h(z_0, z_1, z_2, z_3, z_4, z_5, z_6, i, j, k));
    unsafe {
        println!("hash: {}", a);
    }
}