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
        ac: &mut [bool],
        ad: &mut [i32],
    ) -> j {
        if ab == aa {
            // ...
        }
        let mut t = 0;
        let t3 = o[2 + 1][1] - o[2 + 1][0];
        t = t.max(t3);
        let mut u = t;
        // ...
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