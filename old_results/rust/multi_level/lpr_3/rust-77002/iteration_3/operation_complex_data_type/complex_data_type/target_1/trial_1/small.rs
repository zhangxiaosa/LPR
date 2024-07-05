fn main() {
    fn f(l: &[i64]) -> [i64; 4] {
        let mut l_inner: [i64; 4] = [0, 0, 0, 0];
        // Decomposed variables
        let l_inner_0: i64 = l_inner[0];
        let l_inner_1: i64 = l_inner[1];
        let l_inner_2: i64 = l_inner[2];
        let l_inner_3: i64 = l_inner[3];
        
        // Rest of the function body
        l_inner_0 = l[0];
        // Assign back to the decomposed array
        let l_inner: [i64; 4] = [l_inner_0, l_inner_1, l_inner_2, l_inner_3];
        l_inner
    }

    let l_0: i64 = 1;
    let l_1: i64 = 0;
    let l_2: i64 = 0;
    let l_3: i64 = 0;
    
    // Decomposed variables
    let l_0_inner: i64 = l_0;
    let l_1_inner: i64 = l_1;
    let l_2_inner: i64 = l_2;
    let l_3_inner: i64 = l_3;
    
    // Create decomposed array
    let mut l_inner: [i64; 4] = [l_0_inner, l_1_inner, l_2_inner, l_3_inner];
    
    // Call the function with a reference to the decomposed array
    l_inner = f(&l_inner);
    
    // Print the decomposed array
    println!("{:?}", l_inner);
}