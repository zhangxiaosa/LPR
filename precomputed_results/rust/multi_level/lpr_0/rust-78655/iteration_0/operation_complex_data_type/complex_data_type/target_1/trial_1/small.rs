const b_value: u32 = {
	let b_value_temp: u32;
	let b_ptr_temp: *const u32 = &b_value_temp;
	b_value_temp
};

const b_ptr: *const u32 = &b_value;

fn c() {
	let a = a;
}