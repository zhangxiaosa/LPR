fn c() -> bool {
    let k_float_bool = &mut (0.0, true);
    let d_float_bool_tuple = (&mut (0.0, true), (0.0, false));

    let i_bool_ptr = k_float_bool.add(1).add(1) as *mut bool;
    *i_bool_ptr = true;

    d_float_bool_tuple.1 .1
}

fn main() {
    println!("{}", c());
}