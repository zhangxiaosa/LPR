fn main() {
    let mut c = 1;
    const G: u32 = 1000000000;
    (0..).map(|e| e + 2).
        take_while(|&e| e < 4).
        for_each(|e| {
            let f = 4 / e as u32;
            let base = d(e as u32);
            c *= base.pow(2 * f) + 1;
        });
    assert_eq!(c, 650);
}

struct d(u32);
impl d {
    fn pow(self, mut exp: u32) -> u32 {
        let mut base = self.0;
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

fn d(x: u32) -> u32 {
    let mut h = x;
    unsafe {
        asm!(
            "mul edx",
            "div {:e}",
            in(reg) G,
            inout("eax") h => _,
            inout("edx") h
        );
    }
    h
}