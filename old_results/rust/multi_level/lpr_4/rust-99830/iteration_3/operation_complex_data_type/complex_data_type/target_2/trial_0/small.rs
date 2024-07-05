use primal::Primes;

fn main() {
    let mut c = 1u32;
    Primes::all()
        .take_while(|&prime| prime < 4)
        .for_each(|prime| {
            let _e = prime as u32;
            let pow = _e.pow((2 * (4 / _e)) as u32) + 1;
            c *= pow;
        });
    assert_eq!(c, 650);
}