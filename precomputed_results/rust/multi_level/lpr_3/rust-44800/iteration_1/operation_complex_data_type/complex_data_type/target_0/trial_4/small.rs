use std::collections::VecDeque;

fn main() {
    let k_capacity: usize = 32;
    let mut k_elements: Vec<u8> = Vec::new();
    let mut k: VecDeque<u8> = VecDeque::with_capacity(k_capacity);

    // Add elements to k
    k_elements.push(0);
    k_elements.push(1);
    k_elements.push(1);
    k_elements.push(2);
    k_elements.push(3);
    k_elements.push(4);
    k_elements.push(5);
    k_elements.push(6);
    k_elements.push(1);
    k_elements.push(2);
    k_elements.push(3);
    k_elements.push(4);

    // Initialize k with elements from k_elements
    k.extend(k_elements.iter());

    // Reserve additional capacity for k
    k.reserve_exact(20);

    println!();

    let k_extension: &[u8] = &[0xD9];
    k.extend(k_extension);
}