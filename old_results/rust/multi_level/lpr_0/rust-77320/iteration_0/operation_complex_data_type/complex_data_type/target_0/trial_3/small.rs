const a: isize = 10;
const b: &() = &();

fn c() {
    match &() {
        b => 9,
    };
}