fn main() {
    let mut k = a {
        c: {
            let mut temp = VecDeque::with_capacity(18);
            temp.push_front(0);
            temp
        },
    };

    let desired_capacity = 20;
    if k.c.capacity() < desired_capacity {
        let additional_capacity = desired_capacity - k.c.capacity();
        k.c.extend(std::iter::repeat(0).take(additional_capacity));
    }

    println!();
    k.c.extend(&amp;[0xAA]);
}

struct a {
    c: VecDeque<u8>,
}