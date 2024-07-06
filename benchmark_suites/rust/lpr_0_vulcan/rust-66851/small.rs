fn main() {
    const f: i32 = 1;
    let ac = [];
    let ad = [0i32; 7];
    let o = [];
    match n(7, &o, f, f, 0, &ac, &ad) {
        j::k(j) => (),
        _ => panic!(),
    }
}
enum j {
    k(u64),
    m,
}
fn n(_: i32, z: &[i32], j: i32, af: i32, ab: i32, ac: &[j], ad: &[i32]) -> j {
    if ab == j {
        let mut i32 = String::new();
        i32 += &ad[1 << j].to_string();
        return if let Ok(j) = i32.parse() {
            j::k(j)
        } else {
            j::m
        };
    }
    let j = n(j, z, ab, ab, ab, ac, ad);
    {
        j
    }
}
