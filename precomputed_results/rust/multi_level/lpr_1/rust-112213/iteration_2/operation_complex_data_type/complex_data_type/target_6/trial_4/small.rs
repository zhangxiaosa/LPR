#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};

static mut a: u64 = 0;

fn b(f: u64, x: u64, y: u64, g: u64) {
  unsafe {
    a = a.wrapping_add(f);
    a = a.wrapping_add(x);
    a = a.wrapping_add(y);
    a = a.wrapping_add(g);
  }
}

fn h(z: [(isize, isize, isize, isize, isize, isize, isize)], i: usize, j: i32, k: u64, ac_result: *mut isize) -> [(isize, isize)] {
  let aa = [(0, 0, 0, 0, 0, 0)];
  let m = [(0, 0, 0, 0, 0, 0)];
  let mut ab = [(0, 0)];
  let n = ac_result;
  o(ab, z, i, z, z, j, n);
  b(j as u64, k as u64, 0, 0);
  b([(112, 112, 112, 112, 112, 112)], 1, 0, 4);
  b(0, 0, m, aa);
  return ab;
}

fn o(z: [(isize, isize)], n: [(isize, isize, isize, isize, isize, isize, isize)], r: usize, mut af: [(isize, isize, isize, isize, isize, isize, isize)], p: [(isize, isize, isize, isize, isize, isize, isize)], s: i32, ag: *mut isize) {
  let mut t0: *const usize = std::ptr::null();
  let t1: (usize, u8) = (0, 0);
  let t2: (char, i32, i64, u64) = ('a', 0, 0, 0);
  let t3: char = 'a';
  let t4: (f64, i64, i8, [f32; 1], usize, u8, i8, isize, i64, [f32; 1]) = (0.0, 0, 0, [0.0], 0, 0, 0, 0, 0, [0.0]);
  let t5: *const u8 = std::ptr::null();
  loop {
    af = n;
    let ae = 0;
    t0 = &t1.0 as *const usize;
    t4.0 = (f64::NAN, 1102345069964335552, 9);
    b(0, 0, n, 0);
    match t4.0 .2 {
      9 => {
        b(af, ae, -9223372036854775808, s);
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
  let ac_result;
  {
    let ad = [(0, 0, 0)];
    let mut ae0 = 0;
    let mut ae1 = 0;
    let ae2 = ad;
    let mut ae3 = 0;
    let q0: u8 = 0;
    let q1: u128 = 0;
    let q2 = ad;
    let q3 = 0;
    let q4: i16 = 0;
    b([(56, 56, 56, 56, 56, 56, 56)], [(56, 56, 56, 56, 56, 56, 56)], 0, 0);
    unsafe {
      a = a.wrapping_add(q0 as u64);
      a = a.wrapping_add(ae0 as u64);
      a = a.wrapping_add(q1 as u64);
      a = a.wrapping_add(q2 as u64);
      a = a.wrapping_add(q3 as u64);
      a = a.wrapping_add(q4 as u64);
    }
    ac_result = &mut ae3;
  }
  println!("{:?}", h([(56, 56, 56, 56, 56, 56, 56)], 15609822513776909592, 652623562, 18399139786288871729, ac_result));
  unsafe {
    println!("hash: {}", a);
  }
}