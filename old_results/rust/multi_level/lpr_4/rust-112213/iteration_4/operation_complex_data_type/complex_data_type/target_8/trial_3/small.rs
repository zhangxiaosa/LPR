#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b(f: isize, x: isize, y: isize, g: isize) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae_0: i32 = 0;
    let mut ae_1_0: isize = 0;
    let mut ae_1: [isize; 1] = [0];
    let mut ae_2: u8 = 0;
    let mut q_0: i32 = 0;
    let mut q_1_0: isize = 0;
    let mut q_1_1: isize = 0;
    let mut q_1_2: isize = 0;
    b(p, p, 0, 0);
    unsafe {
        q_0.hash(&mut a);
        ae_0.hash(&mut a);
    }
    ptr::addr_of_mut!(ae_2)
}

fn o(z: [isize; 2], n: [isize; 7], mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    let mut t_0: *const usize = 0 as *const usize;
    let mut t_1_0: usize = 0;
    let mut t_1_1: u8 = 0;
    let mut t_2_0: char = 'a';
    let mut t_2_1: i32 = 0;
    let mut t_2_2_0: i64 = 0;
    let mut t_3: char = 'a';
    let mut t_4_0_0: f64 = 0.0;
    let mut t_4_0_1: i64 = 0;
    let mut t_4_0_2: i8 = 0;
    let mut t_4_1: [f32; 1] = [0.0];
    let mut t_4_2_0: usize = 0;
    let mut t_4_2_1: u8 = 0;
    let mut t_4_3: i8 = 0;
    let mut t_4_4_0: isize = 0;
    let mut t_4_4_1: i64 = 0;
    let mut t_4_5: [f32; 1] = [0.0];
    let mut t_5: *const u8 = 0 as *const u8;
    loop {
        af = n;
        t_0 = ptr::addr_of!(t_1_0);
        b(0, 0, n, 0);
        match t_4_0_2 {
            9 => {
                b(af, 0, -9_223_372_036_854_775_808_isize, 0);
                b(z, [56_isize; 7], n, 0);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn h(z_decomposed: [isize; 7]) -> [isize; 2] {
    let n = ac(z_decomposed);
    o([13; 2], z_decomposed, z_decomposed, z_decomposed, n);
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], [0]);
    [13; 2]
}

fn main() {
    println!("{:?}", h([56_isize; 7]));
    unsafe {
        println!("hash: {}", a.finish());
    }
}