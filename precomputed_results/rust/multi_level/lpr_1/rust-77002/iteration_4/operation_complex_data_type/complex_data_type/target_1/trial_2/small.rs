fn main() {
    let mut l0: i32 = 0;
    let mut l1: i32 = 1;
    let mut l2: i32 = 0;
    let mut l3: i32 = 0;

    let b0: i32 = l0;
    let b1: i32 = l1;
    let b2: i32 = l2;
    let b3: i32 = l3;

    let mut result0: i32 = 0;
    let mut result1: i32 = 0;
    let mut result2: i32 = 0;
    let mut result3: i32 = 0;

    result0 = b1;

    l0 = result0;
    l1 = result1;
    l2 = result2;
    l3 = result3;

    println!("{:?}", [l0, l1, l2, l3]);
}