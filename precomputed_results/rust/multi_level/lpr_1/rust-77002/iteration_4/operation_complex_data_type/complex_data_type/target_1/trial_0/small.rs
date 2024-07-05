fn main() {
    let mut l_0: i32 = 0;
    let mut l_1: i32 = 1;
    let mut l_2: i32 = 0;
    let mut l_3: i32 = 0;
    
    let b: &[i32; 4] = &[l_0, l_1, l_2, l_3];
    
    let mut result_0: i32 = 0;
    let mut result_1: i32 = 0;
    let mut result_2: i32 = 0;
    let mut result_3: i32 = 0;
    
    result_0 = b[1];
    
    l_0 = result_0;
    l_1 = result_1;
    l_2 = result_2;
    l_3 = result_3;
    
    println!("{:?}", [l_0, l_1, l_2, l_3]);
}