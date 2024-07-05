fn main() {
    fn f(a: &[i64], b: &[i64], g: usize, h: usize) -> [i64; 4] {
        let mut l = [0i64; 4];
        for j in 0..h {
            l[j] = b[j];
        }
        l
    }

    const p: i64 = {
        let arr: [i64; 16] = [0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 2, 2, 2];
        let mut result = 0;
        for val in arr.iter() {
            result = (result << 2) | val;
        }
        result
    };

    let mut l: [i64; 4] = [1, 0, 0, 0];
    let b = [&[p >> 48, (p >> 32) & 0xFFFF, (p >> 16) & 0xFFFF, p & 0xFFFF], &l];
    l = f(&b.concat(), &l, 4, 4);
    println!("{:?}", l);
}