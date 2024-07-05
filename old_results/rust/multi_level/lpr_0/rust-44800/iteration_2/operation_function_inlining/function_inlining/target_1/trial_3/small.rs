fn main() {
    let mut k = a {
        c: {
            let mut temp = VecDeque::with_capacity(18);
            if temp.len() == 0 {
                temp.push_back(0);
            } else {
                temp.insert(0, 0);
            }
            temp
        },
    };
    k.c.reserve(20);
    println!();
    k.c.extend(&[0xAA]);
}