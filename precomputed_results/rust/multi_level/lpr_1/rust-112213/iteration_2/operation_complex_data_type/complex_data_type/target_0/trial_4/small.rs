fn main() {
    let ac_result: *mut isize;
    {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b([56_isize; 7], [56_isize; 7], 0, 0);
        unsafe {
            // Hashing q
            let mut hasher_q = DefaultHasher::new();
            q.hash(&mut hasher_q);
            ae.hash(&mut a);
        }
        ac_result = &mut ae.3;
    }
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64, ac_result));
    unsafe {
        println!("hash: {{}}", a.finish());
    }
}