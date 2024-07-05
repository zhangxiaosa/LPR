fn main() {
    let a: *const u32 = {
        let b;
        &b
    };

    {
        let a = a;
        // Function body of c()
        let a = a;
    }
}