fn c() -> bool {
              	let mut a: f32 = 0.0;
              	let e = unsafe { f((&mut a as *mut f32, true, 0.0, false), true, true) };
              	return e;
              }
              
              unsafe fn f(a_ptr: *mut f32, b: bool, _: bool) -> bool {
              	let i = core::ptr::addr_of!((*a_ptr).3) as *mut bool;
              	*i = b;
              	let _a = (*a_ptr, true, 0.0, false);
              	return (*a_ptr).3;
              }
              
              fn main() {
              	println!("{}", c());
              }