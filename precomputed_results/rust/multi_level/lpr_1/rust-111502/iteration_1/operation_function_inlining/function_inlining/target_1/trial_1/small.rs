fn c() -> bool {
  let mut a = (0., true);
  let e = {
    let d = (&mut a, (0.0, false));
    let g = true;
    let _: bool = true;
    let i = core::ptr::addr_of!(d.1) as *mut bool;
    *i = g;
    d;
    *i
  };
  e
}

fn main() {
  println!("{}", {
    let mut a = (0., true);
    let e = {
      let d = (&mut a, (0.0, false));
      let g = true;
      let _: bool = true;
      let i = core::ptr::addr_of!(d.1) as *mut bool;
      *i = g;
      d;
      *i
    };
    e
  });
}