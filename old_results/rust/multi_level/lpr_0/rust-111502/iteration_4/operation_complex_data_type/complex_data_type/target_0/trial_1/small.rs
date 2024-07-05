fn c() -> f64 {
    unsafe { f((&mut 0.0, (0.0, 0.0))) }
}

unsafe fn f(d: (*mut f64, (f64, f64))) -> f64 {
    let mut_var = &mut 0.0;
    let tuple_var = (0.0, 0.0);

    let pointer_var = core::ptr::addr_of!(tuple_var.1 .1) as *mut f64;
    let float_var = *pointer_var;
    let tuple_element_var_1 = tuple_var.0;
    let tuple_element_var_2 = tuple_var.1;

    *pointer_var = 1.0;
    d;
    return tuple_element_var_2;
}

fn main() {
    println!("{}", c());
}