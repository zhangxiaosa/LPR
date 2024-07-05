use primal_sieve::Primes;  
  
fn main() {  
    let mut c = 1;  
    const g: u32 = 1000000000;  
    Primes::all().take_while(|&e| e < 4).for_each(|e| {  
        let f = 4 / e as u32;  
        c *= pow(d(e as u32), 2 * f) + 1;  
    });  
    assert_eq!(c, 650);  
}  
  
fn pow(mut base: u32, mut exp: u32) -> u32 {  
    let mut acc = base;  
    while exp > 1 {  
        base *= base;  
        exp >>= 1;  
        if exp % 2 == 1 {  
            acc *= base;  
        }  
    }  
    acc  
}