use primal_sieve::Primes;

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;

        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) d::g,
                inout("eax") h.0 => _,
                inout("edx") c.0
            );
        }

        c *= d(e).pow(2 * f) + d(1);
    });
    c.0
}