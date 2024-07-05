struct a {
	c: VecDeque<u8>,
}

struct d {
	data: Vec<u8>,
}

fn main() {
	let mut k = {
		let c = VecDeque::new();
		a { c }
	};

	let mut g = {
		let data = Vec::<u8>::new();
		d { data }
	};

	let b = 0x45;
	g.data.push(b);
	g.data.push(20);
	let hw = 20;
	g.data.push(hw as u8);
	g.data.push(hw as u8);
	g.data.push(21);
	g.data.push(21);
	g.data.push(23);
	g.data.push(23);

	k.c.reserve_exact(g.data.len());
	for b in g.data.iter() {
		k.c.push_front(*b);
	}

	let mut g = {
		let data = Vec::<u8>::new();
		d { data }
	};

	let hw = 0b1000_10_00;
	g.data.push(hw as u8);
	g.data.push(hw as u8);

	let addr = [1, 2, 3, 4, 5, 6];
	for &b in addr.iter() {
		let data = &mut g.data;
		data.push(b);
	}
	for &b in addr.iter() {
		let data = &mut g.data;
		data.push(b);
	}
	for &b in addr.iter() {
		let data = &mut g.data;
		data.push(b);
	}

	g.data.push(55);
	g.data.push(55);
	g.data.push(hw as u8);
	g.data.push(hw as u8);

	k.c.reserve_exact(g.data.len());
	for b in g.data.iter() {
		k.c.push_front(*b);
	}

	let fcs = [0xD9];
	println!("");
	k.c.extend(&fcs);
}
