fn main() {
    let h = 5;
    let arg = 4;
    let i = 2;
    let j = 0;
    while 2 == 0 {}
    let mut k;
    k = arg;
    let mut l;
    l = 0;
    l |= 1 << j;
    let f = 0;
    let m = h;
    if f == 0 {
        let a = i;
        let b = l;
        let d = m;
        let result = ((a as u64 * b as u64) % d as u64) as u32;
        k = result;
    } else {
        let a = i;
        let f = l;
        let m = h;
        if f == 0 {
            let a = a;
            let b = a;
            let d = m;
            let result = ((a as u64 * b as u64) % d as u64) as u32;
            k = result;
        } else {
            k = a;
        }
    }
    let a = k;
    let b = l;
    let d = h;
    let result = ((a as u64 * b as u64) % d as u64) as u32;
    assert_eq!(result, 3);
}