fn d() -> u64 {
    enum j {
        k(u64),
        l(i32),
        m,
    }

    // ...

    // Unrolled loop
    let len = ab / 2;

    // Iteration 0
    let index1 = (0 * 2) as usize;
    let index2 = (0 * 2 + 1) as usize;
    let t1 = o[index1 + 1][1] - o[index1 + 1][0];
    let t2 = o[index2 + 1][1] - o[index2 + 1][0];
    t = t.max(t1);
    t = t.max(t2);

    // Iteration 1
    let index3 = (1 * 2 + 2) as usize;
    let index4 = (1 * 2 + 3) as usize;
    let t3 = o[index3 + 1][1] - o[index3 + 1][0];
    let t4 = o[index4 + 1][1] - o[index4 + 1][0];
    t = t.max(t3);
    t = t.max(t4);

    // ...

    j::l(p)
}


fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}