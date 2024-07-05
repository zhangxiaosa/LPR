fn d() -> u64 {
    enum j {
      k(u64),
      l(i32),
      m,
    }
    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    let ab = 0;
    let q = 4096;
    let mut u = [[0, 0]; 16];
    let mut ae = String::new();
    let mut af = true;
    let mut t = 0;
    let mut z = [[0, 0]; 16];
    let mut ab_unrolled = 1 << ab;
    let mut i = 0;
    let mut ad_i_u = 0;
    let mut af_nested = false;
    let mut af_result = j::m;

    if ab == 7 {
      for i in (0..ab).rev() {
        ae += &ad[1 << i].to_string();
      }

      if let Ok(r) = ae.parse::<u64>() {
        af_result = j::k(r);
      }
    } else {
      u = [[0, 0]; 16];

      while u[3][1] - u[3][0] < q {
        af = true;
        t = 0;
        ab_unrolled = 1 << ab;

        for i in 0..ab_unrolled {
          ad_i_u = ad[i] + u[3][0];

          if ac[ad_i_u as usize] {
            af = false;
            break;
          }

          ad[ab_unrolled + i] = ad_i_u;
          ac[ad_i_u as usize] = true;
          t += ab_unrolled;
        }

        if af {
          z = [[0, 0]; 16];

          for i in 1..ab + 2 {
            z[i] = [
              (u[i - 1][0] + o[(i - 1)][0]).min(2147483647),
              o[i][1].max(u[i - 1][1]),
            ];
          }

          af_nested = true;
          ab += 1;
          q = u;
          af_result = j::l(4096);

          // Inlined call to `n` starts here
          ac = [false; 8192];
          ad = [0i32; 128];
          ab_unrolled = 1 << ab;
          i = 0;
          ad_i_u = 0;
          af = true;
          t = 0;
          z = [[0, 0]; 16];

          while u[3][1] - u[3][0] < q {
            af = true;
            t = 0;
            ab_unrolled = 1 << ab;

            for i in 0..ab_unrolled {
              ad_i_u = ad[i] + u[3][0];

              if ac[ad_i_u as usize] {
                af = false;
                break;
              }

              ad[ab_unrolled + i] = ad_i_u;
              ac[ad_i_u as usize] = true;
              t += ab_unrolled;
            }

            if af {
              z = [[0, 0]; 16];

              for i in 1..ab + 2 {
                z[i] = [
                  (u[i - 1][0] + o[(i - 1)][0]).min(2147483647),
                  o[i][1].max(u[i - 1][1]),
                ];
              }

              af_nested = true;
              ab += 1;
              q = u;
              af_result = j::l(4096);
            }

            for i in 0..(t / ab_unrolled) {
              ac[ad[ab_unrolled + i] as usize] = false;
            }

            u[3][1] += 1;
          }

          if af_nested {
            af_result = j::l(4096);
            af_nested = false;
          }

          // End of inlined call to `n`
          for i in 0..(t / ab_unrolled) {
            ac[ad[ab_unrolled + i] as usize] = false;
          }

          u[3][1] += 1;
        }

        u[3][1] += 1;
      }
    }

    let ad_i_u = ad[0x01] as u64;

    if ad_i_u != 0 {
      ad_i_u
    } else {
      0
    }
  }

  fn main() {
    assert_eq!(d(), 20_313_839_404_245);
  }
