#![unstable(feature = "humans", issue = "none")]
#![feature(staged_api)]

fn main() {
    // Inline the function 'b'
    let result = 42;
    
    println!("Result: {}", result);
}