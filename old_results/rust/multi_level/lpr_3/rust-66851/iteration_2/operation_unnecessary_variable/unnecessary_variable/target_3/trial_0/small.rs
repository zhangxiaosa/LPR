fn d() -> Option<u64> {
  enum Option<T> {
    Some(T),
    None,
  }

  fn n(o: &[[i32; 2]]) -> Option<u64> {
    let mut ae = String::new();
    for _ in 0..2 {
      ae += "00";
    }
    if let Ok(r) = ae.parse() {
      Option::Some(r)
    } else {
      Option::None
    }
  }

  match n(&Default::default()) {
    Option::Some(_) => Some(20313839404245u64),
    _ => None,
  }
}

fn main() {
  assert_eq!(d(), Some(20313839404245u64));
}