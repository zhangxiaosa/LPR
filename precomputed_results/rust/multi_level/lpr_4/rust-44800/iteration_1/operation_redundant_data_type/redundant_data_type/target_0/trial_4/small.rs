struct a {
    c: Vec<u8>,
}
fn main() {
    let mut k = a {
        c: Vec::with_capacity(32),
    };
    let mut g_data = Vec::with_capacity(20);
    g_data.push(0x45);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);
    while let Some(b1) = g_data.pop() {
        k.c.insert(0, b1);
        k.c.insert(0, b1);
    }
    let hw_1 = 0b1000_10_00;
    let addr = [1, 2, 3, 4, 5, 6];
    let mut g_1_data = vec![hw_1];
    k.c.reserve(g_1_data.len());
    k.c.push(0xD9);
    println!();
    
}
