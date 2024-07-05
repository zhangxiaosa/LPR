fn main() {
    let h = 5;
    let arg = 4;
    let k = {
        let k = arg;
        let l = ((((2 as u64) * (1 << 0)) % (h as u64)) as u32);
        let k = (((k as u64) * ((((arg as u64) * (arg as u64)) % (h as u64)) as u32)) % (h as u64)) as u32;
        k
    };
    println!("{}", k);
}
