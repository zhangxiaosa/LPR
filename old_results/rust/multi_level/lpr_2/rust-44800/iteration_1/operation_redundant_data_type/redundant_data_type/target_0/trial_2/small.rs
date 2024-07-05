fn main() {
	let mut k: Vec<T> = Vec::new();
	let mut g_data = vec![0x45, 20, 0b1000_10_00, 0b1000_10_00];
	let hw: u8 = 0b1000_10_00;
	let fcs = [0xD9];
	k.push(3);
	k.push(2);
	k.push(1);
	k.push(g_data[0]);
	g_data.push(hw);
	g_data.push(hw);
	g_data.push(55);
	g_data.push(55);
	g_data.push(hw);
	g_data.push(hw);
	k.extend_from_slice(&fcs);
}