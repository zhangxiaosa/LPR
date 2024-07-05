fn main() {
    let arg = 4;
    let i = 2;
    
    let mut m1;
    m1 = 0;
    m1 = i;
    let k1 = (arg * m1) % 5;
    assert_eq!(k1, 3);
}