fn main() {
    let k_float_bool = &mut (0.0, true) as *mut (f32, bool);
    let d_float_bool_tuple = (&mut (0.0, true) as *mut (f32, bool), (0.0, false));

    let i_bool_ptr = &mut d_float_bool_tuple.1 .1 as *mut bool;
    *i_bool_ptr = true;
    d_float_bool_tuple;
    d_float_bool_tuple.1 .1;

    println!("{}", d_float_bool_tuple.1 .1);
}