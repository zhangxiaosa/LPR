use primal_sieve::Primes;

fn main() {
    let mut c = d(1);
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| {
            let h = d(_e as u32);
            unsafe {
                core::arch::asm!(
                    "mul edx",
                    "div {:e}",
                    in(reg) d::g,
                    inout("eax") h.0 => _,
                    inout("edx") c.0
                );
            }
            c.0 += 1;
        });
    let target = d(650);
    assert_eq!(c, target);
}

#[derive(Debug, Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 1_000_000_000;
}