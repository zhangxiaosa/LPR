use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

#[derive(Clone, Copy)]
struct d(u32);

impl d {
	const G: u32 = 10u32.pow(9);

	fn pow(self, mut exp: u32) -> Self {
		let mut base = self;
		base *= base;
		exp >>= 1;
		let mut acc = base;
		exp >>= 1;
		base *= base;
		if exp == 1 {
			acc *= base;
		}
		acc
	}
}

impl Add for d {
	type Output = d;

	fn add(mut self, h: d) -> d {
		self.0 += h.0;
		self
	}
}

impl MulAssign for d {
	fn mul_assign(&mut self, h: d) {
		unsafe {
			core::arch::asm!(
				"mul edx",
				"div {:e}",
				in(reg) Self::G,
				inout("eax") h.0 => _,
				inout("edx") self.0
			);
		}
	}
}

fn main() {
	assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
	let mut c = d(1);
	let mut prime_iter = Primes::all().peekable();
	while let Some(&e) = prime_iter.peek() {
		let e = e as u32;
		if e >= b {
			break;
		}
		prime_iter.next();
		let f = b / e;
		c *= d(e).pow(2 * f) + d(1);
	}
	c.0
}
