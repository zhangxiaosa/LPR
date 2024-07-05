fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    let mut prime_gen = PrimeGenerator::new();
    while let Some(e) = prime_gen.next() {
        let e = e as u32;
        let f = b / e;
        let mut h = c;
        for _ in 0..2 * f {
            h *= h;
            h += d(1);
        }
        c = h;
    }
    c.0
}

struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);

    fn pow(mut self, mut exp: u32) -> Self {
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

struct PrimeGenerator {
    primes: Vec<u64>,
    index: usize,
}

impl PrimeGenerator {
    fn new() -> Self {
        PrimeGenerator {
            primes: vec![2],
            index: 0,
        }
    }

    fn next(&mut self) -> Option<u64> {
        if self.index < self.primes.len() {
            let prime = self.primes[self.index];
            self.index += 1;
            Some(prime)
        } else {
            let mut num = self.primes.last().copied().unwrap() + 1;
            while !is_prime(num) {
                num += 1;
            }
            self.primes.push(num);
            Some(num)
        }
    }
}

fn is_prime(num: u64) -> bool {
    if num < 2 {
        return false;
    }
    let limit = (num as f64).sqrt() as u64 + 1;
    for i in 2..limit {
        if num % i == 0 {
            return false;
        }
    }
    true
}