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
fn h(z: [isize; 7], i: usize, j: i32, k: u64) {
    let aa = [0];
    let n = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b(z, z, 0, 0);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        ptr::addr_of_mut!(ae.3)
    };
    
    loop {
        let mut af = z;
        let _ag = ptr::null_mut();
        let mut t: (
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
        
        af = z;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, z, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, 0, 0, j);
                b(z, aa, n, i);
                break;
            }
            v => unsafe {
                *_ag = 88_isize;
            },
        }
    }
    
    b(j, k, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], aa);
    
    println!("{:?}", [13, 13]);
}

fn main() {
    h(
        [56_isize; 7],
        15609822513776909592_usize,
        652623562_i32,
        18399139786288871729_u64,
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}