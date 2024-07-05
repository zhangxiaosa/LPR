trait b {
    fn d<e>(self, e) -> f<e>;
}

struct f<c> {
    h: e,
}

fn a() -> impl b {
    {}.d(|| "")
}