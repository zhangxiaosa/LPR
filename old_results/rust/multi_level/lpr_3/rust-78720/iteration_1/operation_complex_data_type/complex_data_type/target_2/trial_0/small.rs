fn a() -> impl b {
    let empty_struct = {};

    empty_struct.d(|| "")
}

trait b {
    fn d<e>(self, e) -> f<e>;
}

struct f<c> {
    h: c,
}