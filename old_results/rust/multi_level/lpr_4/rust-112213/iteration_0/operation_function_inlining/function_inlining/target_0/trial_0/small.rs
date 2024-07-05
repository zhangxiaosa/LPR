#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b(c: impl Hash, w: impl Hash, d: impl Hash, e: impl Hash)
{    
  unsafe {
    let mut a = DefaultHasher::new();
    c.hash(&mut a);
    w.hash(&mut a);
    d.hash(&mut a);
    e.hash(&mut a);
  }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2]
{
  let l = 1;
  let aa = [0; 6];
  let m = [0; 6];
  let ab = [13; 2];
  let n = 
  {
    let ad = [0; 3];
    let mut ae = (0, 0, ad, 0);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
    unsafe {
      let mut a = DefaultHasher::new();
      z.hash(&mut a);
      z.hash(&mut a);
      let hash_result = a.finish();
      ae.3.hash(&mut a);
      let ptr_hash_result = a.finish();
      ptr::addr_of_mut!(ae.3)
    }
  };

  let mut t: (
    *const usize,
    (usize, u8),
    (char, i32, (i64,), u64),
    char,
    ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]),
    *const u8,
  ) = (
    ptr::null(),
    (0, 0),
    ('a', 0, (0,), 0),
    'a',
    ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
    ptr::null(),
  );
  let mut u: ((f64, i64, i8),) = Default::default();
  loop {
    let af = z;
    let ah = -9223372036854775808_isize;
    let ae = 0;
    t.0 = ptr::addr_of!(t.1.0);
    t.4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
    unsafe { b(0, 0, z, 0); }
    u.0 = t.4.0;
    match u.0.2 {
      9 => { b(z, z, ah, j); b([0, 0], z, z, i); return ab; }
      v => unsafe { *(
        unsafe { (0 as *mut isize).add(0) }
        ) = 88_isize; },
    }
  }
}

fn main()
{
  println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64));
  unsafe { println!("hash: {}", a.finish()); }
}