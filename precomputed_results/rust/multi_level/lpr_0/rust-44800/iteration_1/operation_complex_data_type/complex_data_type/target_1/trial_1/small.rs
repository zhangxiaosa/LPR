use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: VecDeque::with_capacity(18),
    };
    k.c.push_front(7);
    k.c.push_front(6);
    k.c.push_front(5);
    k.c.push_front(4);
    k.c.push_front(3);
    k.c.push_front(2);
    k.c.push_front(1);
    k.c.push_front(0);
    let mut data = Vec::with_capacity(20);
    data.push(0b1000_10_00);
    data.push(1);
    data.push(2);
    data.push(3);
    data.push(4);
    data.push(5);
    data.push(6);
    data.push(55);
    k.c.reserve(data.len());
    println!();
    k.c.extend(&amp;[0xAA]);

    // Decomposing k.c into primary data type variables
    let mut c_values = Vec::new();
    while let Some(value) = k.c.pop_front() {
        let extracted_value = value;
        c_values.push(extracted_value);
    }

    // Remove the original k.c variable
    // k.c no longer needed from this point onwards

    // Print the decomposed values
    for value in c_values {
        println!("{}", value);
    }
}