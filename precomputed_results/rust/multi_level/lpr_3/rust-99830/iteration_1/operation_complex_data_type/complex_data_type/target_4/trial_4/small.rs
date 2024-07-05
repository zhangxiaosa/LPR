use primal_sieve::Primes;

fn main() {
    let mut c = 1;
    let g = 1000000000u32;
    
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e as u32;
        let d_e = e as u32;
        let pow_result = {
            let base = d(d_e);
            let mut exp = 2 * f;
            let mut acc = base * base;
            exp >>= 1;
            acc *= acc;
            if exp == 1 {
                acc *= base;
            }
            acc
        };
        c = c * pow_result + 1;
    });
    
    assert_eq!(c, 650);
}

struct d(u32);

impl d {
    fn pow(self, mut exp: u32) -> u32 {
        let mut base = self;
        let mut acc = base;
        base = base * base;
        exp >>= 1;
        base *= base;
        if exp == 1 {
            acc *= base;
        }
        acc
    }
}