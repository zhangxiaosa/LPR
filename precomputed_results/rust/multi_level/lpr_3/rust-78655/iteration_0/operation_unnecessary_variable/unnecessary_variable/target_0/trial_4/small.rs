const a: *const u32 = {
    &();
};

fn main() {
    let a = a;
}