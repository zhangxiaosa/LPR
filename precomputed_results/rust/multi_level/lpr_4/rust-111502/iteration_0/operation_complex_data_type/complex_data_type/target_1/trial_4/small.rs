fn c() -> bool {
  let mut a_0 = 0.;
  let mut a_1 = true;
  let b_0 = 0.;
  let b_1 = false;
  let a = (a_0, a_1);
  let b = (b_0, b_1);
  let mut a_ptr = &mut a;
  let b_ptr = &b;
  let d_0 = &mut a_ptr;
  let d_1_0 = b_ptr.0;
  let d_1_1 = b_ptr.1;
  let d_1 = (d_1_0, d_1_1);
  let d = (d_0, d_1);
  let e = unsafe { f(d_0, d, true, true) };
  return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
  let i = &mut (*d.0).1;
  let j = g;
  *i = j;
  d;
  return d.1.1;
}

fn main() {
  println!("{}", c());
}