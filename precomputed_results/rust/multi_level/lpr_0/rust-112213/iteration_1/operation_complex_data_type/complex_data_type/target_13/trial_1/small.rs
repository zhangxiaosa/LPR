fn main() {
    let z: [isize; 7] = [56, 56, 56, 56, 56, 56, 56];
    let i: usize = 15609822513776909592;
    let j: i32 = 652623562;
    let k: u64 = 18399139786288871729;

    let l: isize = 1;
    let aa: [isize; 6] = [0, 0, 0, 0, 0, 0];
    let mut m: [isize; 6] = [0, 0, 0, 0, 0, 0];
    let ab: [isize; 2] = [13, 13];

    let mut ae_ad: [isize; 3] = [0, 0, 0];
    let mut ae: (usize, u8, [isize; 3], isize) = (0, 0, ae_ad, 0);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ae_ad, 0, 0);

    let mut z_mut = z;
    b(&mut z_mut, &mut z_mut, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }

    let n: *mut isize = &mut ae.3;

    o(
        &z,
        &mut z_mut,
        i,
        &mut z_mut,
        &z,
        j,
        n
    );

    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b((), (), &mut m, &mut aa);

    let ab_final = ab;

    println!("{:?}", ab_final);

    unsafe {
        println!("hash: {}", a.finish());
    }
}