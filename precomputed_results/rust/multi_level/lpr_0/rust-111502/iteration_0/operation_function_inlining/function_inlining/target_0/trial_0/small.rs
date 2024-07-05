fn main() {
    let mut a = (0., true);
    let b = (0., false);
    let d = (&mut a, b);
    let j = true;
    *(core::ptr::addr_of!((d.0).1)) = j;
    return (d.1).1;
    println!("{}", c());
}