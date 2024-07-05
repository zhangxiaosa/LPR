#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b(f: impl Hash, x: impl Hash, y: impl Hash, g: impl Hash) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z_elements: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    let aa_elements = [0; 6];
    let m_elements = [0; 6];
    let ab_elements = [13; 2];
    let ad_elements = [0; 3];
    let q_elements = (0, 0, ad_elements, 0);

    let z = z_elements;
    let aa = aa_elements;
    let m = m_elements;
    let ab = ab_elements;
    let ad = ad_elements;
    let q = q_elements;

    b(&z, &z, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    let n = ptr::addr_of_mut!(ae.3);

    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b((), (), m, aa);
    return ab;
}

fn o(
    z_elements: [isize; 2],
    n_elements: [isize; 7],
    r: usize,
    mut af_elements: [isize; 7],
    p_elements: [isize; 7],
    s: i32,
    _ag: *mut isize,
) {
    let mut t_elements: (
        *const usize,
        (usize, u8),
        (char, i32, (i64,), u64),
        char,
        (
            (f64, i64, i8),
            [f32; 1],
            (usize, u8),
            i8,
            (isize, i64),
            [f32; 1],
        ),
        *const u8,
    ) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );

    loop {
        af_elements = n_elements;
        let ae = 0;
        t_elements.0 = ptr::addr_of!(t_elements.1 .0);
        t_elements.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n_elements, 0);
        match t_elements.4 .0 .2 {
            9 => {
                b(af_elements, ae, 0, s);
                b(z_elements, p_elements, n_elements, r);
                return;
            }
            v => unsafe {
                *_ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!("{:?}", h(
        [56_isize; 7],
        15609822513776909592_usize,
        652623562_i32,
        18399139786288871729_u64,
    ));

    unsafe {
        println!("hash: {}", a.finish());
    }
}