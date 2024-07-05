fn d() -> u64 {
    enum j {
        k(u64),
        l(i32),
        m,
    }
    fn n(
        aa: i32,
        o: &[[i32; 2]; 16],
        p: i32,
        q: i32,
        ab: i32,
        ac: &mut [bool; 8192],
        ad: &mut [i32],
    ) -> j {
        if ab == aa {
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
        let mut t = 0;
        let len = ab / 2;
        let mut i = 0;
        if i + 1 < len {
            let index1 = (i * 2) as usize;
            let index2 = (i * 2 + 1) as usize;

            let t1 = o[index1 + 1][1] - o[index1 + 1][0];
            let t2 = o[index2 + 1][1] - o[index2 + 1][0];

            t = t.max(t1);
            t = t.max(t2);

            let index3 = (i * 2 + 2) as usize;
            let index4 = (i * 2 + 3) as usize;

            let t3 = o[index3 + 1][1] - o[index3 + 1][0];
            let t4 = o[index4 + 1][1] - o[index4 + 1][0];

            t = t.max(t3);
            t = t.max(t4);

            i += 2;
        }

        if i < len {
            let index1 = (i * 2) as usize;
            t = t.max(o[index1 + 1][1] - o[index1 + 1][0]);
        }

        if t > 0 {
            // Iteration 0
            let i = 0;
            // Loop body for iteration 0
            // ...
        }

        let mut u = t;

        // Unrolled loop
        // Iteration 1
        // Loop body for iteration 1
        // ...

        // Iteration 2
        // Loop body for iteration 2
        // ...

        // ...

        // Iteration ab + 1
        // Loop body for iteration ab + 1
        // ...

        j::l(p)
    }
    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    let o = Default::default();
    match n(7, &o, 4096, 4096, 0, &mut ac, &mut ad) {
        j::k(s) => s,
        _ => 0,
    }
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}