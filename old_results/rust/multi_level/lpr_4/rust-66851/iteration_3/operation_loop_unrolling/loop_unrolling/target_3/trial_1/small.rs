fn d() -> u64 {
  enum j {
    k(u64),
    l(i32),
    m,
  }
  fn n(o: &[[i32; 2]; 16], ab: i32, q: i32, ac: &mut [bool], ad: &mut [i32]) -> j {
    if ab == 7 {
      let mut ae = String::new();
      for i in (0..ab).rev() {
        ae += &ad[1 << i].to_string();
      }
      return if let Ok(r) = ae.parse() {
        j::k(r)
      } else {
        j::m
      };
    }
    let mut u = o[3][1] - o[3][0];
    while u + 4 <= q {
      let mut af0 = true;
      let mut t0 = 0;
      let ab_unrolled0 = 1 << ab;
      for i in 0..ab_unrolled0 {
        let ad_i_u0 = ad[i] + u;
        if ac[ad_i_u0 as usize] {
          af0 = false;
          break;
        }
        ad[ab_unrolled0 + i] = ad_i_u0;
        ac[ad_i_u0 as usize] = true;
        t0 += ab_unrolled0;
      }
      if af0 {
        let mut z0: [[i32; 2]; 16] = Default::default();
        for i in 1..ab + 2 {
          z0[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
          z0[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
        }
        let af0 = n(&z0, ab + 1, u, ac, ad);
        match af0 {
          j::k(_) | j::m => return af0,
          j::l(_) => {}
        }
      }
      for i in 0..(t0 / ab_unrolled0) {
        ac[ad[ab_unrolled0 + i] as usize] = false;
      }

      // loop body (iteration 1)
      let mut af1 = true;
        let mut t1 = 0;
        let ab_unrolled1 = 2 << ab;
        for i in 0..ab_unrolled1 {
          let ad_i_u1 = ad[i] + u;
          if ac[ad_i_u1 as usize] {
            af1 = false;
            break;
          }
          ad[ab_unrolled1 + i] = ad_i_u1;
          ac[ad_i_u1 as usize] = true;
          t1 += ab_unrolled1;
        }
        if af1 {
          let mut z1: [[i32; 2]; 16] = Default::default();
          for i in 1..ab + 2 {
            z1[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
            z1[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
          }
          let af1 = n(&z1, ab + 1, u, ac, ad);
          match af1 {
            j::k(_) | j::m => return af1,
            j::l(_) => {}
          }
        }
      for i in 0..(t1 / ab_unrolled1) {
        ac[ad[ab_unrolled1 + i] as usize] = false;
      }

      // loop body (iteration 2)
      let mut af2 = true;
        let mut t2 = 0;
        let ab_unrolled2 = 3 << ab;
        for i in 0..ab_unrolled2 {
          let ad_i_u2 = ad[i] + u;
          if ac[ad_i_u2 as usize] {
            af2 = false;
            break;
          }
          ad[ab_unrolled2 + i] = ad_i_u2;
          ac[ad_i_u2 as usize] = true;
          t2 += ab_unrolled2;
        }
        if af2 {
          let mut z2: [[i32; 2]; 16] = Default::default();
          for i in 1..ab + 2 {
            z2[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
            z2[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
          }
          let af2 = n(&z2, ab + 1, u, ac, ad);
          match af2 {
            j::k(_) | j::m => return af2,
            j::l(_) => {}
          }
        }
      for i in 0..(t2 / ab_unrolled2) {
        ac[ad[ab_unrolled2 + i] as usize] = false;
      }

      // loop body (iteration 3)
      let mut af3 = true;
        let mut t3 = 0;
        let ab_unrolled3 = 4 << ab;
        for i in 0..ab_unrolled3 {
          let ad_i_u3 = ad[i] + u;
          if ac[ad_i_u3 as usize] {
            af3 = false;
            break;
          }
          ad[ab_unrolled3 + i] = ad_i_u3;
          ac[ad_i_u3 as usize] = true;
          t3 += ab_unrolled3;
        }
        if af3 {
          let mut z3: [[i32; 2]; 16] = Default::default();
          for i in 1..ab + 2 {
            z3[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
            z3[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
          }
          let af3 = n(&z3, ab + 1, u, ac, ad);
          match af3 {
            j::k(_) | j::m => return af3,
            j::l(_) => {}
          }
        }
      for i in 0..(t3 / ab_unrolled3) {
        ac[ad[ab_unrolled3 + i] as usize] = false;
      }

      u += 4;
    }

    // Handle remaining iterations (if any) in the original loop
    while u < q {
      let mut af = true;
      let mut t = 0;
      let ab_unrolled = 1 << ab;
      for i in 0..ab_unrolled {
        let ad_i_u = ad[i] + u;
        if ac[ad_i_u as usize] {
          af = false;
          break;
        }
        ad[ab_unrolled + i] = ad_i_u;
        ac[ad_i_u as usize] = true;
        t += ab_unrolled;
      }
      if af {
        let mut z: [[i32; 2]; 16] = Default::default();
        for i in 1..ab + 2 {
          z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
          z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
        }
        let af = n(&z, ab + 1, u, ac, ad);
        match af {
          j::k(_) | j::m => return af,
          j::l(_) => {}
        }
      }
      for i in 0..(t / ab_unrolled) {
        ac[ad[ab_unrolled + i] as usize] = false;
      }

      u += 1;
    }

    j::l(4096)
  }
  let mut ac = [false; 8192];
  let mut ad = [0i32; 128];
  match n(&Default::default(), 0, 4096, &mut ac, &mut ad) {
    j::k(ad_i_u) => ad_i_u,
    _ => 0,
  }
}

fn main() {
  assert_eq!(d(), 20_313_839_404_245);
}