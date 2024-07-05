fn main() {
    let mut c = d { 0: 1 };
    (0..).map(|e| d { 0: e as u32 })
        .take_while(|&e| e < 4)
        .for_each(|e| {
            let mut base = e;
            base *= base;
            let exp = 8 / e as u32;
            base *= base;
            let mut acc = base;
            if exp == 1 {
                acc *= base;
            }
            c *= acc + d { 0: 1 };
        });
    assert_eq!(c, d { 0: 650 });
}