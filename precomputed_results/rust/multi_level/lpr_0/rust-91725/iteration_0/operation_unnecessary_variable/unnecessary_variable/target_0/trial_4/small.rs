fn main() {
    let arg = 4;
    let i = 2;
    let l = 0;
    let l = i * l;
    let result = (arg * l) % 5;
    assert_eq!(result, 3);
}