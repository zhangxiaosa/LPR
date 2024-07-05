fn main() {
    let aa: u64 = 7;
    let o: u64 = 0;
    let p: u64 = 4096;
    let q: u64 = 4096;
    let ab: u64 = 0;
    let ad: Vec<i32> = vec![];

    let r: Result<u64, _> = "20313839404245".parse();
    let result = match r {
        Ok(s) => Some(s),
        _ => None,
    };

    assert_eq!(result, Some(20313839404245));
}