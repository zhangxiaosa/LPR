fn d() -> u64 {
	let e: i32 = 7;
	let f: i32 = 1 << 12;
	let w: usize = f as usize;
    enum j {
      k(u64),
      l(i32),
      m,
    }
    fn n(aa: i32, o: &[[i32; 2]; 16], p: i32, q: i32, ab: i32, ac: &mut [bool; w], ad: &mut [i32]) -> j {
        let mut ae = String::new();
        for i in (0..ab).rev() {
            ae.push_str(&ad[1 << i].to_string());
        }
        return if let Ok(r) = ae.parse() {
            j::k(r)
        } else {
            j::m
        };
    }
    let mut ac = vec![false; w];
    let mut ad = vec![0i32; 1 << e as usize];
    let mut o: Vec<[i32; 2]> = vec![[0; 2]; 16];
    o[1][0] = i32::MAX;
    match n(e, &o, f, f, 0, &mut ac, &mut ad) {
      j::k(s) => s,
      j::l(_) => 0,
      j::m => 0,
    }
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}