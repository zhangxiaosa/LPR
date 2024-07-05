fn c() -> bool {
    let e = {
        let i = core::ptr::addr_of!(0.) as *mut bool;
        let j = true;
        *i = j;
        true
    };
    return e;
}

fn main() {
    println!("{}", {
        let e = true;
        e
    });
}