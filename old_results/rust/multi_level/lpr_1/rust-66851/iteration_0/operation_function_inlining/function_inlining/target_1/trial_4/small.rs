fn main() {
	const f: usize = 1 << 12;

	type x = [[i32; 2]; 16];

	fn n(aa: i32, o: &x, p: i32, q: i32, ab: i32, ac: &mut [bool; f], ad: &mut [i32; 1 << e]) -> Option<u64> {
		if ab == aa {
			let mut ae = String::new();
			for i in (0..ab).rev() {
				ae.push_str(&ad[1 << i].to_string());
			}
			return ae.parse().ok().map(j::k).unwrap_or(j::m);
		}

		let mut t = 0;
		for i in 0..ab-1 {
			t = t.max(o[i + 1][1] - o[i + 1][0]);
		}

		let mut u = t;
		while u < q {
			let mut af = true;
			let ag = 1 << ab;
			let mut ah = 0;

			for i in 0..ag {
				let s = ad[i] + u;
				if ac[s as usize] {
					af = false;
					break;
				}
				ad[ag + i] = s;
				ac[s as usize] = true;
				ah += 1;
			}

			if af {
				let mut z: x = Default::default();
				z[ab as usize + 2][0] = std::i32::MAX;

				for i in 1..ab + 2 {
					z[i as usize][0] = o[i as usize][0].min(u + o[(i - 1) as usize][0]);
					z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
				}

				n(aa, &z, p, u, ab + 1, ac, ad);

				if let j::k(_) | j::m = af {
					return af;
				}
			}

			for i in 0..ah {
				ac[ad[ag + i] as usize] = false;
			}

			u += 1;
		}

		Some(p)
	}

	let mut ac = [false; f];
	let mut ad = [0i32; 1 << 7];
	let mut o: x = Default::default();
	o[1][0] = std::i32::MAX;

	Some(n(7, &o, f as i32, f as i32, 0, &mut ac, &mut ad)).filter(|&s| matches!(s, j::k(_))).map(|s| if let j::k(v) = s { v })

	assert_eq!(Some(20_313_839_404_245), Some(20_313_839_404_245));
}