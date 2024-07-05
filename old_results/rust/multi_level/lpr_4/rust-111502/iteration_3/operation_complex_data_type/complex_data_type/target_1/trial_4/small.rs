fn c() -> bool {
	unsafe { f() }
}

unsafe fn f() -> bool {
	true
}

fn main() {
	println!("{}", c());
}