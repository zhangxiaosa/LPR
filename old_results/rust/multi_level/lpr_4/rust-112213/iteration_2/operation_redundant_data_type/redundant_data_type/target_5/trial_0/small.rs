fn h(_: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    return [13; 2];
}

fn main() {
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32));
}
