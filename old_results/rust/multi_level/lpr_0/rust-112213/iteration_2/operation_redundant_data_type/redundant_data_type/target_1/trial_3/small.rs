fn b(f: f64, x: i64, y: i64, g: i8) {
    f.hash(DefaultHasher);
    x.hash(DefaultHasher);
    y.hash(DefaultHasher);
    g.hash(DefaultHasher);
}
fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 7] {
    let aa = [0; 1];
    let n = {
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
        b(z, z, 0, 0);
        q.hash(DefaultHasher);
        ptr::null_mut()
    };
    o([13, 13], z, i, z, z, j, n as *mut isize);
    b([112; 6], 1, 0, 4);
    b((), (), [0; 1], aa);
    return [13; 2];
}
fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    mut af: [isize; 7],
    p: [isize; 7],
    s: i32,
    _ag: *mut isize,
) {
    loop {
        af = n;
        b(0, 0, n as &[u64], 0);
        match 9 {
            9 => {
                b(af, 0, 0, s);
                b(z, p, n, r);
                return;
            }
            v => {
                let _ = _ag;
                *_ag = 88;
            }
        }
    }
}
fn main() {
    println!("{:?}", h([56; 7], 15609822513776909592, 652623562, 18399139786288871729));
}