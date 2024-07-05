fn main() {
    assert_eq!(
        {
            let j = 0;
            // Loop unrolled
            let mut l = 0;
            l |= 1 << j;
            let result;
            if l == 0 {
                result = 2 * 2
            } else {
                result = 2
            }
            4 as u64 * result % 5
        },
        3
    );
}