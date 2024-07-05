fn main() {
    fn f() -> [[i64; 4]; 4] {
        let mut l = [[0; 4]; 4];
        l[0][0] = 1;
        l
    }

    let l = f();
    println!("{:?}", l);
}