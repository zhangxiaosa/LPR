fn c() -> bool {
    unsafe { f() }
}

unsafe fn f() -> bool {
    let i_bool_ptr = core::ptr::addr_of!(false) as *mut bool;
    *i_bool_ptr = true;
    true
}

fn main() {
    println!("{}", c());
}