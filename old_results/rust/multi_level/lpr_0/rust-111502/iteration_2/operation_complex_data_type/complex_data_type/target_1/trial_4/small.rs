fn c() -> bool {
  let mut a: f32 = 0.;
  let mut d_1_0: f32 = 0.;
  unsafe { f(&mut a, (&mut d_0, (d_1, d_2)), g, h) }
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f32, bool)), g: bool, h: bool) -> bool {
  let i: *mut bool = core::ptr::addr_of!(d.1.1) as *mut bool;
  *i = true;
  d;
  return d.1.1;
}

fn main() {
  println!("{}", c());
}