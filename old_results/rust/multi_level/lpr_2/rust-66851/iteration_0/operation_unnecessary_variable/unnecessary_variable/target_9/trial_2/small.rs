fn main() {
    const F: i32 = 1 << 12;
    enum J {
        K(u64),
        L(i32),
        M,
    }

    fn n(aa: i32, o: &[[i32; 2]], p: i32, q: i32, ab: i32, ac: &mut [bool], ad: &mut [i32]) -> J {
        if ab == aa {
            let r = format!(
                "{}{}{}{}{}{}{}",
                ad[1 << ab - 1],
                ad[1 << ab - 2],
                ad[1 << ab - 3],
                ad[1 << ab - 4],
                ad[1 << ab - 5],
                ad[1 << ab - 6],
                ad[1 << ab - 7]
            );

            return if let Ok(r) = r.parse() { J::K(r) } else { J::M };
        }
        let mut u = 0;
        let y = q;
        for i in 1..=ab {
            u = u.max(o[i as usize][1] - o[i as usize][0]);
        }
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
            for i in 0..(1 << ab) {
                let s = ad[i] + u;
                if ac[s as usize] {
                    af = false;
                    break;
                }
                ad[(1 << ab) + i] = s;
                ac[s as usize] = true;
                ah += 1;
            }
            if af {
                let mut z: [[i32; 2]; 16] = Default::default();
                z[(ab + 2) as usize][0] = std::i32::MAX;