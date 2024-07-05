fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = (unsafe { &mut a }, b);

    let i = &mut d.1 .1;
    let j = true;
    *i = j;

    return d.1 .1;
}