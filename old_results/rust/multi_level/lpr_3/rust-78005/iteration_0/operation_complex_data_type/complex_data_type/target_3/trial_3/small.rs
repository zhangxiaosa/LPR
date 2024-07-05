fn main() {
    let x_isize;
    let x_i8;
    
    {
        let x: isize;
        x_isize = x;
    }

    {
        let x: i8;
        x_i8 = x;
    }
    
    // Rest of the program...
}