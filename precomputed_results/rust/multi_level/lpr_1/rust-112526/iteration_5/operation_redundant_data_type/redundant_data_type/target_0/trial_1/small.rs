unsafe fn a() -> bool {
    let mut isize_min: bool = false;
    
    let _177 = Default::default();

    isize_min = true;

    return isize_min;
}

fn main() {
    unsafe {
        a();
    }
}