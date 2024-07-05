fn main() {
    let mut c = [20u8, 20u8, 20u8, 20u8, 20u8, 20u8, 20u8, 20u8, 21u8, 21u8, 21u8, 21u8, 0b1000\u8, 0b10\u8, 0b00\u8, 0b1000\u8, 0b10\u8, 0b00\u8, 1u8, 2u8, 3u8, 4u8, 5u8, 6u8, 1u8, 2u8, 3u8, 4u8, 5u8, 6u8];
    let fcs = [0xD9u8];
    println!();
    c.extend(&fcs);
}