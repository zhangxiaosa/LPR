const a: *const u32 = {
	let b;
	&b
};

{
	let a_inner = a;
}