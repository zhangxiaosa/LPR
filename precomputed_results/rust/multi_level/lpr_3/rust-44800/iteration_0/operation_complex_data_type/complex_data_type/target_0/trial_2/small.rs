fn main() {
    let mut k: Vec<u8> = Vec::with_capacity(32);
    k.push(0);
    k.push(1);
    k.push(1);
    k.push(2);
    k.push(3);
    k.push(4);
    k.push(5);
    k.push(6);
    k.push(1);
    k.push(2);
    k.push(3);
    k.push(4);
    k.reserve_exact(20);
    let fcs: [u8; 1] = [0xD9];
    k.extend(&fcs);
}