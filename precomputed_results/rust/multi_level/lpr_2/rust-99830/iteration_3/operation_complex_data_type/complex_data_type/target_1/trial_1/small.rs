fn main() {
    let mut c = 1u32;
    (1..)
        .filter(|&num| Primes::is_prime(num))
        .take_while(|&e| e < 4)
        .for_each(|e| {
            let f = 4 / e;
            c *= e.pow(2 * f) + 1;
        });
    assert_eq!(c, 650);
}

fn pow(base: u32, mut exp: u32) -> u32 {
    let mut result = base;
    exp >>= 1;
    result = result.wrapping_mul(result);
    exp >>= 1;
    result = result.wrapping_mul(result);
    if exp == 1 {
        result = result.wrapping_mul(base);
    }
    result
}

fn mul_assign(a: &mut u32, b: u32, g: u32) {
    *a = unsafe {
        let eax: u32;
        let edx: u32;
        asm!(
            "mul edx",
            "div {}",
            in(reg) g,
            inout("eax") b => eax,
            inout("edx") *a => edx
        );
        eax
    };
}

fn is_prime(num: u32) -> bool {
    if num < 2 {
        return false;
    }
    for i in 2..=num / 2 {
        if num % i == 0 {
            return false;
        }
    }
    true
}