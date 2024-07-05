fn a() -> impl b {
    let hashmap = HashMap::new();
    hashmap.d(|| String::new())
}

trait b {
    fn d<e>(self, e) -> f<e>;
}

struct f<c> {
    h: e,
}

impl<e> b for e {}
