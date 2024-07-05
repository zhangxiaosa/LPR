fn main() {
    let z: [isize; 7] = [56_isize; 7];
    let i: usize = 15609822513776909592_usize;
    let j: i32 = 652623562_i32;
    let k: u64 = 18399139786288871729_u64;
    println!("{:?}", h(z, i, j, k));
    let finish_result = unsafe { a.finish() };
    println!("hash: {}", finish_result);
}