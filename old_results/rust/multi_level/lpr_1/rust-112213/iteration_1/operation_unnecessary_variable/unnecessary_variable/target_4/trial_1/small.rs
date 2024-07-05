fn b<X: Hash, G: Hash>(x: X, g: G) {
    x.hash(&mut a);
    g.hash(&mut a);
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64, ac_result: *mut isize) -> [isize; 2] {
    let ab = [13; 2];
    o(ab, z, i, z, z, j, n);
    b(0, k, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), aa);
    return ab;
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    mut af: [isize; 7],
    p: [isize; 7],
    s: i32,
    ag: *mut isize,
) {
    let mut af = n;
    let ae = 0;
    b(0, 0);
    match 9 {
        9 => {
            b(af, ae, -9223372036854775808_isize, s);
            b(z, p, n, r);
            return;
        }
        _ => unsafe {
            *ag = 88_isize;
        },
    }
}

fn main() {
    let ac_result;
    {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b([56_isize; 7], [56_isize; 7], 0, 0);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        ac_result = ptr::addr_of_mut!(ae.3);
    }
    println!(
        "{:?}",
        h(
            [56_isize; 7],
            15609822513776909592_usize,
            652623562_i32,
            18399139786288871729_u64,
            ac_result
        )
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}