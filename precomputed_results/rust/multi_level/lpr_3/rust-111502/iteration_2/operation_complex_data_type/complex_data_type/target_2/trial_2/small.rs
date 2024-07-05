fn c() -> bool {
    let mut a = 0.0;
    let b = true;
    let c = 0.0;
    let d = false;

    // Pass the decomposed variables to the modified function call
    let e = unsafe { f((&mut a, b, c, d), true, true) };

    return e;
}