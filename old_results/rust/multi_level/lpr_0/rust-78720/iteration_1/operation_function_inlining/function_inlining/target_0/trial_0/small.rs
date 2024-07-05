trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: c,
}

impl<e> b for e {}

fn main() {
    let result = f { h: "" };
}