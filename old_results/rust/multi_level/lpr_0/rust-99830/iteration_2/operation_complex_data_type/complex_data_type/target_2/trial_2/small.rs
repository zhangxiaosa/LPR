use primal_sieve::Primes;

fn main() {
    let mut c: u32 = 1;
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let mut other: u32 = e.pow(2 * (4 / e)) + 1;
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) d::g,
                inout("eax") other => _,
                inout("edx") c
            );
        }
    });
    assert_eq!(c, 650);
}