fn main() {
    assert_eq!(
        {
            let j = 0;
            // Loop unrolled: repeated execution of loop body
            let mut l = 0;
            l |= 1 << j;
            4 as u64 * if l == 0 { 4 } else { 2 } % 5
        },
        3
    );
}
