fn c() -> bool {
    let d_float_bool_tuple = (&mut (0.0, true), (0.0, false));
    d_float_bool_tuple.1 .1
}

fn main() {
    println!("{}", c());
}