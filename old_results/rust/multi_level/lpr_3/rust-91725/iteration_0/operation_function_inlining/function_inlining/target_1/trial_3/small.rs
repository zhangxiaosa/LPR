fn c(a: u32, b: u32, d: u32) -> u32 {
    ((a as u64 * b as u64) % d as u64) as u32
}

fn g(h: u32, arg: u32) -> u32 {
    let i = 2;
    let j = 0;
    while 2 == 0 {}
    let mut k;
    k = arg;
    let mut l;
    l = 0;
    l |= 1 << j;

    // Inlined body of function e:
    let f = 0;
    let m = h;
    let result: u32;

    if f == 0 {
        let a = i;
        let b = l;
        let d = m;
        result = ((a as u64 * b as u64) % d as u64) as u32;
    } else {
        result = i;
    }

    k = result;
    k
}

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

    // Inlined body of function e:
    let f = 0;
    let m = h;
    let result: u32;

    if f == 0 {
        let a = i;
        let b = l;
        let d = m;
        result = ((a as u64 * b as u64) % d as u64) as u32;
    } else {
        result = i;
    }

    k = result;

    // Inlined body of function g:
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

    // Inlined body of function e:
    let f = 0;
    let m = h;
    let result: u32;

    if f == 0 {
        let a = i;
        let b = l;
        let d = m;
        result = ((a as u64 * b as u64) % d as u64) as u32;
    } else {
        result = i;
    }

    k = result;
    k;

    assert_eq!(k, 3);
}