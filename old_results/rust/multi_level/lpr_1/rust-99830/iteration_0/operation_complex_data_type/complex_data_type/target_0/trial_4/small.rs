use std::iter;

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    primes()                // Generate prime numbers
        .take_while(|&e| e < b as usize)
        .for_each(|e| {
            let e = e as u32;
            let f = b / e;
            c *= d(e).pow(2 * f) + d(1);
        });
    c.0
}

struct d(u32);

impl d {
    const G: u32 = 1_000_000_000;

    fn pow(self, mut exp: u32) -> Self {
        let mut acc = 1;
        while exp > 0 {
            if exp & 1 != 0 {
                acc *= self.0;
                acc %= Self::G;
            }
            self.0 *= self.0;
            self.0 %= Self::G;
            exp >>= 1;
        }
        d(acc)
    }
}

impl std::ops::Add for d {
    type Output = d;
    fn add(self, h: d) -> d {
        d(self.0.wrapping_add(h.0))
    }
}

impl std::ops::MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        self.0 = self.0.wrapping_mul(h.0) % d::G;
    }
}

fn primes() -> impl Iterator<Item = usize> {
    let mut sieve = vec![true; 65536];
    sieve[0] = false;
    sieve[1] = false;

    (2..).filter(move |&i| {
        if sieve[i] {
            (i..).step_by(i).skip(1).take_while(|&j| j < 65536)
                .for_each(|j| sieve[j] = false);
            true
        } else {
            false
        }
    })
}