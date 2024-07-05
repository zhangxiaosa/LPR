const a: isize = 10;
const b: &() = &();
fn main() {
match &() {
b => 9,
};
}