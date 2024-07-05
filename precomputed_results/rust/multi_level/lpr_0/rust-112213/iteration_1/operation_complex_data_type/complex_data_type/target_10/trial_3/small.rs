fn main() {
    let z: [isize; 7] = [56_isize, 56_isize, 56_isize, 56_isize, 56_isize, 56_isize, 56_isize];
    let i: usize = 15609822513776909592_usize;
    let j: i32 = 652623562_i32;
    let k: u64 = 18399139786288871729_u64;

    let l: isize = 1;
    let aa: [isize; 6] = [0_isize, 0_isize, 0_isize, 0_isize, 0_isize, 0_isize];
    let m: [isize; 6] = [0_isize, 0_isize, 0_isize, 0_isize, 0_isize, 0_isize];
    let ab: [isize; 2] = [13_isize, 13_isize];

    let mut n: *mut isize;
    unsafe {
        let ad: [u64; 3] = [0_u64, 0_u64, 0_u64];
        let mut ae: (usize, u8, [u64; 3], isize) = (0_usize, 0_u8, ad, 0_isize);
        let q: (u8, u128, [u64; 3], isize, i16) = (0_u8, 0_u128, ad, 0_isize, 0_i16);
        b(z, z, 0, 0);
        q.hash(&mut a);
        ae.hash(&mut a);
        n = ptr::addr_of_mut!(ae.3);
    }

    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b((), (), m, aa);

    let result = ab;
    println!("{:?}", result);

    unsafe {
        println!("hash: {}", a.finish());
    }
}