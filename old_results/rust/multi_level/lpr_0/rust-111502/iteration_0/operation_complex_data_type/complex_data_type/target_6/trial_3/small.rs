fn c() -> bool {
  let mut a0: f32 = 0.;
  let mut a1: bool = true;

  let b0: f32 = 0.;
  let b1: bool = false;

  let mut d0: *mut f32 = &mut a0;
  let mut d1: bool = b1;

  let e: bool = unsafe { f(d0, (d0, (0., b1)), true, true) };

  return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f64, bool)), g: bool, h: bool) -> bool {
  let mut i: *mut bool = &mut d.1 .1;
  let mut j: bool = g;
  *i = j;
  d;
  return d.1 .1;
}

fn main() {
  println!("{}", c());
}