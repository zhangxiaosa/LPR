use std::collections::VecDeque;

struct a {
	n: VecDeque<u8>,
}

fn main() {
	let mut k = a {
		n: {
			let mut temp = VecDeque::with_capacity(18);
			temp.push_front(0);
			temp
		},
	};

	k.c.reserve(20);
	println!("{}", );

    for &element in &[0xAA] {
        k.c.push_back(element);
    }
}